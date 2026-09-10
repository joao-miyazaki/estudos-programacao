
#include <stdio.h>




int main() {

    long long n1=0 , n2=1 , termos;
    int i;

    printf("Quantos termos você quer na sequencia? ");
    scanf("%lld", &termos);
    


    for (i=1 ; i<=termos; i++) {
        long long temp = n1;
        n1 = n2;
        n2 = temp + n2;
        printf("%lld, ", temp);
    };



    return 0;
}
