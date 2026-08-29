#include <stdio.h>

// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

int main(){
    
    float salario, salario_novo; 
    
    printf("Digite o valor do seu salario ");
    scanf("%f",&salario);

    salario_novo = salario * 1.25;
    
    printf("Seu salario novo e %.2f", salario_novo);

    return 0;
}