#include <stdio.h>

int sumar(int a, int b);

int mult(int a, int b);

int main(){

    printf("%d", sumar(mult(4,5), 10));

    return 0;
}

int sumar(int a, int b){
    return a + b;
}

int mult(int a, int b){
    return a * b;
}