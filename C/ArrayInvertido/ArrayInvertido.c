#include <stdio.h>


//Invertendo um array
//Declare um array com 5 números, exiba ele na ordem normal e depois na ordem invertida.

int main() {
 
    int q;
    printf("Digite a quantidade de elementos no array: ");
    scanf("%d", &q);
    int n, i, array[q];

    n = (sizeof(array)/sizeof(array[0]));

    for (i=1 ; i<=n; i++) {

        printf("Digite o número %d: ", i);
        scanf("%d", &array[i]);
    };

    printf("O array tem os seguintes elementos: ");

    for (i=1 ; i<=q; i++) {

        printf("[%i] ", array[i]);
    };

    printf("\nO array invertido tem os seguintes elementos: ");

    for (i=q ; i>=1; i--) {

        printf("[%i] ", array[i]);
    };
    
    return 0;
    
}