#include <stdio.h>

void dobrar(int *p){

    *p = (*p) * 2; 

};


int main(){

    int n = 10;
    dobrar(&n);

    printf("%d", n);

    return 0;
};