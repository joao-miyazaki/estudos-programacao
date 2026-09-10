#include <stdio.h>
#include <string.h>

//O Objetivo: Criar um programa que cadastre as leituras de 3 sensores diferentes e depois faça uma análise.

struct sensor{
    int id;
    char nome[30];
    float valor;
};

int main(){

    struct sensor sensor01;
    
    sensor01.id=1;
    sensor01.valor=25.5;
    
    
    
    strcpy(sensor01.nome, "Termometro da Sala");

    printf("O %s (ID %d) registou %.2f graus\n", sensor01.nome, sensor01.id, sensor01.valor);



    return 0;
}