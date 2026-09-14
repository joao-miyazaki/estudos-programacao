#include <stdio.h>

long long memo[100] = {0}; // array de resultados, começa tudo zerado


long long fibonacci(int numero){
    
    

    if (numero==1) {
        return 0;
    }

    else if(numero==2){
        return 1;    
    }
    

    long long resultado ;

    if (memo[numero] != 0) return memo[numero]; // já calculou, retorna direto

    resultado = fibonacci(numero-1) + fibonacci(numero-2);

    memo[numero] = resultado;

    return resultado;

    
}



int main(){

    
    int numero=50;
    
    
    for (int i=1; i<=numero; i++){
        long long resultado = fibonacci(i);
        printf("%lld, ", resultado);
    }

    return 0;
}