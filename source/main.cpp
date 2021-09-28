#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "edn.h"
/*
const char* myName(); 
*/
const char *imprimirDirectorio(char *directorio, int opcion);

int seleccionNotas(char *directorio);

void imprimirNota(char *nombre_nota);


int main(){
    
    printf("Selecciona una opción:\n\n");
    printf("\t1. Leer una nota.\n");
    printf("\t2. Borrar una nota.\n");

    int opcion; scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
        {
            int seleccion = seleccionNotas("./notas");
            char nota[50];/*
            const char *nombre_nota_actual = imprimirDirectorio("./notas", seleccion);
            strcpy(nota, nombre_nota_actual);
            char aux[50];
            strcat(aux,"./notas/");
            strcat(aux,nota);
            imprimirNota(aux);*/
            break;
        }

        default:
        {
            printf("Opción invalida.");
            break;
        }
    }

    //imprimirNota("./notas/nota1.md");

    return 0;
}

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



int seleccionNotas(char *directorio){
    printf("Selecciona una de las notas disponibles:\n\n");
    imprimirDirectorio(directorio, 0);
    int opcion; 
    scanf("%d", &opcion);
    return opcion;
}


const char *imprimirDirectorio(char *directorio, int opcion){
    struct dirent *files;
    DIR* dir_notas = opendir(directorio);
    if (dir_notas == NULL){
        printf("Error al abrir el directorio." );
    }
    int contador = 0;
    char nombre_archivo[40];
    while ((files = readdir(dir_notas)) != NULL){

        strcpy(nombre_archivo, files->d_name);

        if (strcmp(nombre_archivo, ".") == 0 || strcmp(nombre_archivo, "..") == 0){
            continue;
        }
        else{
            contador++;
            if (opcion == 0)
            {
                continue;
                printf("\t%d. %s\n", contador, nombre_archivo);
            }
            if ((opcion == contador) && (opcion != 0))
            {
                return nombre_archivo;
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