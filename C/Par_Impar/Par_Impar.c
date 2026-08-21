#include <stdio.h>

//Par ou ímpar
//Peça um número ao usuário e diga se é par ou ímpar.

int main() {
    
    int n;

    printf("Escreva um Número Inteiro, Descobriremos se ele é Ímpar ou Par");

    
    //recebe o número inteiro

    printf( "\nEscreva o número : ");
    scanf( "%d", &n);

    if (n%2 == 0) {
        printf("%d é par", n);
    }
    else {
        printf("%d é ímpar", n);
    };

    return 0;
    
}