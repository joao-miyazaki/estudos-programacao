#include <stdio.h>



//Conversor de temperatura
//Peça uma temperatura em Celsius ao usuário e converta para Fahrenheit e Kelvin. Use float e exiba com 2 casas decimais.


int main() {
 
    float celsius, fahrenheit, kelvin;
    
    printf("Insira uma temperatura em Graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit=(((9*celsius)/5)+32);
    kelvin = celsius + 273.15;

    printf("A sua temperatura %.2lf em Graus Celsius, corresponde em Graus Fahrenheit a %.2lf, e em Kelvin a %.2lf", celsius, fahrenheit, kelvin);


    return 0;
    
}