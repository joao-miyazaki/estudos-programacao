#include <stdio.h>

//Tabuada
//Peça um número ao usuário e imprima a tabuada dele de 1 a 10.

int main() {
    
    int n;

    printf("Tabuada");

    
    //recebe os dois números inteiros

    printf( "\nEscreva o número : ");
    scanf( "%d", &n);

    int i;
    int r;

    for (i=1 ; i<=10; i++) {
        printf("%dx%d=%d\n", n, i, r=(n*i));
        
    };

    return 0;
    
}