#include <stdio.h>

// Sabe-se que:
// 1 pé = 12 polegadas
// 3 pés = 1 jarda
// 1 milha = 1760 jardas
// Faça um programa que que receba uma medida em pés, faça a conversões a
// seguir e mostre os resultados.
// a) Polegadas;
// b) Jardas;
// c) Milhas.

int main(){
   
    float pes, resultado; 
	
    printf("Digite um numero em pes\n");
    scanf("%f",&pes);

    resultado = pes * 12;
    printf("Esse numero em polegadas e %.2f\n", resultado);

    resultado = pes / 3;
    printf("Esse numero em jardas e %.2f\n", resultado);

    resultado = (pes / 3) / 1760;
    printf("Esse numero em milhas e %.2f\n", resultado);

    return 0;
}
