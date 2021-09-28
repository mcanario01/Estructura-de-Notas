#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "edn.h"

int main(){
    //menu para el usuario
    printf("Selecciona una opción:\n\n");
    printf("\t1. Leer una nota.\n");
    printf("\t2. Borrar una nota.\n");
    //escaneamos la opción principal del usuario
    int opcion; scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
        {
            //guardamos en una variable la nota que elige el usuario
            int seleccion = seleccionNotas("./notas");
            //printf("%d SELECCION", seleccion);
            char nota[50];
            //guardamos la cadena que retorna la funcion imprimirDirectorio en una variable
            const char *nombre_nota_actual = imprimirDirectorio("./notas", seleccion);
            strcpy(nota, nombre_nota_actual);
            //printf("%s <- esta es la nota", nota);

            char aux[50];
            strcat(aux,"./notas/");
            strcat(aux,nota);

            //se imprime la nota seleccionada.
            imprimirNota(aux);
            break;
        }
        //(el caso 2 no fué implementado por desconocimiento)

        //caso por defecto por si se elige una opción invalida
        default:
        {
            printf("Opción invalida.");
            break;
        }
    }

    return 0;
}
