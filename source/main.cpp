#include <stdio.h>
#include <string.h>
#include "edn.h"

const char* myName(); 

const char* listaDeNotas();

void imprimirNota(char nombre_nota[20]);

int main(){
    
    printf("Selecciona una opción:\n\n");
    printf("\t1. Leer una nota.\n");
    printf("\t2. Borrar una nota.\n");

    int opcion; scanf("%d", &opcion);
    printf("%s -", listaDeNotas());
/*
    switch (opcion)
    {
    case 1:{

        //printf("%c --- \n\n", listaDeNotas());
        
        //strcat("./notas/nota", listaDeNotas());
        break;
    }

    default:{


        break;
    }
    }
*/
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



const char* listaDeNotas(){
    printf("Selecciona una de las notas disponibles:\n\n");
    printf("\t1. nota1.md\n");
    printf("\t2. nota2.md\n");
    printf("\t3. nota3.md\n");
    printf("\t4. nota4.md\n");
    printf("\t5. nota5.md\n");
    char opcion[2]; 
    scanf("%s", opcion);
    return opcion;
}


const char* myName() {
  char *name = "Flavio";
  return name;
}