#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "edn.h"
/*
const char* myName(); 
*/
void imprimirDirectorio(char *d);

int listaDeNotas(char *d);

void imprimirNota(char nombre_nota[20]);

int main(){
    
    printf("Selecciona una opción:\n\n");
    printf("\t1. Leer una nota.\n");
    printf("\t2. Borrar una nota.\n");

    int opcion; scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
        {
            imprimirDirectorio("./notas");
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

void imprimirNota(char nombre_nota[20]){
    
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



int listaDeNotas(char *d){
    printf("Selecciona una de las notas disponibles:\n\n");
    imprimirDirectorio(d);
    int opcion; 
    scanf("%d", &opcion);
    return opcion;
}

void imprimirDirectorio(char *d){
    struct dirent *files;
    DIR* dir_notas = opendir(d);
    if (dir_notas == NULL){
        printf("Error al abrir el directorio." );
    }
    int contador = 0;
    char nombre_archivo[40];
    while ((files = readdir(dir_notas)) != NULL){
        
        strcpy(nombre_archivo, files->d_name);
        contador++;
        printf("\t%d. %s - %d\n", contador, nombre_archivo, (int)strlen(nombre_archivo));
    }
    closedir(dir_notas);    
}

/*
const char* myName() {
  char *name = "Flavio";
  return name;
}
*/