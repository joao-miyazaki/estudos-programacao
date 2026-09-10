#include <stdlib.h>
#include <stdio.h>
#include <time.h>


// Adivinhe o número
// O programa sorteia um número entre 1 e 100. O usuário tenta adivinhar — o programa diz se o chute foi alto, baixo ou correto. Repete até acertar e no final mostra quantas tentativas foram necessárias.

int main() {

    int numero = 0, chute =0,tentativa = 0;

    srand(time(NULL));
    numero = (rand() % 100) + 1;
    
    printf("Tente adivinhar o número\n");

    while (numero!=chute) {
        printf("Insira um número: ");
        scanf("%d", &chute);
        tentativa=tentativa+1;
        
        if (numero>chute) {
            printf("O número é maior do que %d, tente novamente.\n", chute);
        }
        else if (numero<chute) {
            printf("O número é menor do que %d, tente novamente.\n", chute);
        }
        else if (numero==chute) {
            printf("Você adivinhou ! o número era %d. Você levou %d tentativas", numero, tentativa);
        }
    }
    

    return 0;
}
