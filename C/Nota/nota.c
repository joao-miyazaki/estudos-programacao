#include <stdio.h>


//Média de notas
//Declare um array com 5 notas, calcule e exiba a média. Diga se o aluno foi aprovado (média ≥ 6) ou reprovado.



int main() {
 
    int i;

    float notas[5], soma=0, media;


    for (i=1 ; i<=5; i++) {

        printf("Digite a nota %d: ", i);
        scanf("%f", &notas[i]);
        soma=soma+notas[i];
    };

    media=soma/5;

    if (media>=6) {
        printf("O aluno foi aprovado com a média igual a %.2lf", media);
    }
    else{
        printf("O Aluno foi reprovado com a média igual a %.2lf", media);
    };
    
    
    return 0;
    
}