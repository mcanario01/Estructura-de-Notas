#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "edn.h"


//funcion que imprime una nota y se le pasa por parametros el nombre de la nota en forma de cadena.
void imprimirNota(char *nombre_nota){
    
    FILE* nota1 = fopen(nombre_nota, "r");
    
    char caracter;

    if(nota1 == NULL)
    {
        printf("error.\n");
    }
    
    while ((caracter = fgetc(nota1)) != EOF)
    {
        printf("%c", caracter);
    }
    
    fclose(nota1);
}


//funcion que con ayuda de la siguiente funcion imprime todos los archivos de un directorio dado.
int seleccionNotas(char *directorio){
    printf("Selecciona una de las notas disponibles:\n\n");
    imprimirDirectorio(directorio, 0);
    int opcion; 
    scanf("%d", &opcion);
    printf("%d", opcion);
    return opcion;
}

//funcion con multiples usos, se usa tanto como para imprimir el directorio como para retornar el nombre de una nota en forma de cadena de caracteres para su posterior impresión.
const char *imprimirDirectorio(char *directorio, int opcion){
    struct dirent *files;
    DIR* dir_notas = opendir(directorio);
    if (dir_notas == NULL){
        printf("Error al abrir el directorio." );
    }
    int contador = 0;
    char nombre_archivo[50];
    while ((files = readdir(dir_notas)) != NULL){

        strcpy(nombre_archivo, files->d_name);

        if (strcmp(nombre_archivo, ".") == 0 || strcmp(nombre_archivo, "..") == 0){
            continue;
        }
        else
        {
            contador++;
            //printf("%d - OPCION", opcion);
            if (opcion == 0)
            {
                
                printf("\t%d. %s\n", contador, nombre_archivo);
                continue;
                
            }
            
            if ((opcion == contador) && (opcion != 0))
            {
                return nombre_archivo;
            }
            else
            {
                continue;
            }
            
            
                      
        }
        
    }
    closedir(dir_notas);

    return 0;
}


/*
const char* myName() {
  char *name = "Flavio";
  return name;
}
*/