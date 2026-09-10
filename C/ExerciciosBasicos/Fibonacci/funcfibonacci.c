
#include <stdio.h>

long long fibonacci(long long termos) {
    
    long long n1=0 , n2=1;
    int i;

    for (i=1 ; i<=termos; i++) {
        long long temp = n1;
        n1 = n2;
        n2 = temp + n2;
    };

    return n1;
}


int main() {

    long long termos;

    printf("Quantos termos você quer na sequencia? ");
    scanf("%lld", &termos);
    
    int i,n;

    for (i=0 ; i<termos; i++){
        long long n1=fibonacci(i);
        printf("%lld ", n1);
    }


    return 0;
}
