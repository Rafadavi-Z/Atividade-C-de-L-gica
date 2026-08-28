#include <stdio.h>

// Faça um programa que receba o salário-base de um funcionário, calcule e
// mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
// 50,00 e paga imposto de 10% sobre o salário-base.

int main(){
    
    float salario, salario_novo, grati, imposto; 
    
    printf("Digite o valor do seu salario ");
    scanf("%f",&salario);
	
	grati = 50.0;
	imposto = salario * (10.0/100);
	
    salario_novo = salario - imposto + grati;
    
    printf("Seu salario novo e %.2f", salario_novo);

    return 0;
}
