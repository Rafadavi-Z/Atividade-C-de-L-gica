#include <stdio.h>

// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

int main(){
    
    float salario, salario_novo, porcen_aumen; 
    
    printf("Digite o valor do seu salario ");
    scanf("%f",&salario);
    
    printf("Digite a porcentagem do aumento do salario ");
    scanf("%f",&porcen_aumen);

    salario_novo = salario * (1 + (porcen_aumen/100));
    
    printf("Seu salario novo e %.2f", salario_novo);

    return 0;
}