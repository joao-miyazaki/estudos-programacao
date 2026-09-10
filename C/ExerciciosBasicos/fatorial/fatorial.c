#include <stdio.h>

int main() {

    int i, numero;
    long long fatorial=1;
    
    printf("Insira o número que o fatorial quer ser consultado: ");
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; i++) {
        fatorial = fatorial*i;
    };

    printf("O fatorial é igual a %lld", fatorial);


    return 0;
}
