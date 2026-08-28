#include <stdio.h>

// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas

int main(){
    
    float nota1, nota2, nota3, peso1, peso2, peso3, media_p; 
    
    printf("Digite o valor da nota1 ");
    scanf("%f",&nota1);
    printf("Digite o valor da peso1 ");
    scanf("%f",&peso1);
    printf("Digite o valor da nota2 ");
    scanf("%f",&nota2);
    printf("Digite o valor da peso2 ");   
    scanf("%f",&peso2);
    printf("Digite o valor da nota3 ");
    scanf("%f",&nota3);
    printf("Digite o valor da peso3 ");   
    scanf("%f",&peso3);

    media_p = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    
    printf("Seu resultado e %.2f", media_p);

    return 0;
}