#include <stdio.h>

//Exercício: Cadastro de Alunos

//Crie um programa que:

//Usa uma struct chamada Aluno com os campos: nome (string), matricula (int) e media (float)
//Declara um array de 3 alunos
//Tem uma função cadastrar_aluno que recebe um aluno e preenche os dados via input do usuário
//Tem uma função imprimir_aluno que recebe um aluno e imprime os dados formatados
//No main, cadastra os 3 alunos em loop e depois imprime todos

struct aluno {
    char nome[50];
    int matricula;
    float media;
};

struct aluno cadastrar_aluno(){
    
    struct aluno a;
 
    printf("Insira o nome do Aluno: ");
    scanf(" %[^\n]", a.nome);
 

    printf("Insira a matrícula do aluno: ");
    scanf("%d", &a.matricula);
    

    printf("Insira a média do aluno: ");
    scanf("%f", &a.media);
    
    return a;
};

void imprimir_aluno(struct aluno a){


    printf("Nome do Aluno: %s\n", a.nome);
    printf("Matrícula do Aluno: %d\n", a.matricula);
    printf("Média do Aluno: %.2f\n", a.media);

};

int main(){

    struct aluno alunos[3];

    int i, n = (sizeof(alunos)/sizeof(alunos[0]));

    for (i=0 ; i<n; i++) {
        alunos[i] = cadastrar_aluno();
    };
    for (i=0 ; i<n; i++) {
        
        imprimir_aluno(alunos[i]);
    };
    


    return 0;
}