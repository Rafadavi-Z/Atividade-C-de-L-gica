#include <stdio.h>

// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre:
// a) A idade dessa pessoa.
// b) Quantos anos essa pessoa terá em 2050

#include <time.h>

int main(){
   
    float ano, resultado; 
	
    printf("O ano que voce nasceu\n");
    scanf("%f",&ano);

    resultado = time(NULL);

    printf("Esse numero em polegadas e %f\n", resultado);

    return 0;
}
