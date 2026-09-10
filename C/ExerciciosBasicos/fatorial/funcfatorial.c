#include <stdio.h>

long long fatorial(long long numero) {
    int i;
    long long fatorial=1;
    
    
    for (i = 1; i <= numero; i++) {
        fatorial = fatorial*i;
    };
    return fatorial;
}

int main() {

    long long numero;    
    printf("Insira o número que o fatorial quer ser consultado: ");
    scanf("%lld", &numero);
    long long resultado = fatorial(numero);
    printf("O fatorial é igual a %lld", resultado);


    return 0;
}
