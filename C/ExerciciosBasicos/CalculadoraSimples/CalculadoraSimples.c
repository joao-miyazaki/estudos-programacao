#include <stdio.h>


// Calculadora Simples
// Peça dois números ao usuário e exiba a soma, subtração, multiplicação e divisão entre eles.

int main() {
    
    int n1;
    int n2;

    printf("Escreva dois Números Inteiros");

    
    //recebe os dois números inteiros

    printf( "\nEscreva o número 1: ");
    scanf( "%d", &n1);
    printf( "\nEscreva o número 2: ");
    scanf( "%d", &n2);
    

    //operações executadas
    int soma = (n1+n2);
    int subtracao = (n1-n2);
    int multiplicacao = (n1*n2);
    int divisao = (n1/n2);

    //imprime os resultados
    printf("O Resultado da soma é %d\n", soma);
    printf("O Resultado da subtração é %d\n", subtracao);
    printf("O Resultado da multiplicação é %d\n", multiplicacao);
    printf("O Resultado da divisão é %d", divisao);
    

    
    return 0;
    
}

