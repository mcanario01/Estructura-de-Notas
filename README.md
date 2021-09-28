# Estructura-de-Notas.
En este repositorio se guardarán los archivos del proyecto "Estructura de Notas" del grupo 1 del ramo Estructuras de datos y algoritmos, impartido por el prof. Mathias Clein, en el segundo semestre del año 2022 de la carrera de Ingeniería Civil Telmática de la Universidad de la Frontera.

## Introducción.

Existe una gran cantidad de tiempo invertido en ordenar las notas para referenciarlas en un un futuro y mantener un estudio ordenado, por lo que surgió la idea de programar este programa con el enfoque de tener un uso sencillo de orden en notas.

Su funcionamiento es simple, deberemos escribir nuestras notas en formato de lenguaje de marcado, con las siguientes condiciones:

```markdown
# titulo
~
-cat1: tag1.
-cat2: tag2.
~
(contenido)
```

## Referencia de notas.

Para revisar las notas que tenemos guardadas deberemos simplemente ejecutar el programa.
```
./main
```
Al realizarse la ejecución el programa imprimirá varias opciones, deberás seleccionar una.
```
Selecciona una opción:
    1. Leer una nota.
    2. Ver la lista de categorías.
    3. Borrar una nota
```
Al seleccionar `` 1. Leer una nota `` el programa imprimirá toda la lista de notas por pantalla y esperará la respuesta del usuario para imprimir la nota correspondiente.

## Ordenamiento por etiquetas.
Al seleccionar la opción ```2. Ver la lista de categorías.``` el programa analizará todas las notas e imprimirá por por pantalla la lista completa de categorías que encuentre en estas.
```
Selecciona una categoría:

    1. Ramos.
    2. Semanas.
    3. Fechas.
    ...
```
 Al seleccionar alguna, el programa imprimirá por pantalla la lista completa de etiquetas que encuentre de esa categoría.
 ```
Selecciona una de las siguientes etiquetas de la categoría: Ramo.

    1. EDO.
    2. SO.
    3. AL.
    4. Tel2
    ...
 ```
 Al seleccionar una etiqueta, el programa imprimirá por pantalla la lista completa de las notas que tengan la etiqueta de la categoría mencionada.
 Finalmente, el usuario deberá ingresar el numero que le corresponde a la nota que está indicada en pantalla para imprimirla por pantalla y leerla.
