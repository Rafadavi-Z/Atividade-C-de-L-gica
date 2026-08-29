#include <stdio.h>

// Faça um programa que receba o salário-base de um funcionário, calcule e mostre o
// salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
// salário-base e paga imposto de 7% sobre o salário-base.

int main(){
    
    float salario, salario_novo, grati, imposto; 
    
    printf("Digite o valor do seu salario ");
    scanf("%f",&salario);

	//grati = salario * (5/100); -----> aqui esta o erro do porque a conta esta dando 0
	//imposto = salario * (7/100);
	
	grati = salario * (5.0/100);
	imposto = salario * (7.0/100);
	
    salario_novo = salario - imposto + grati;
    
    printf("Seu salario novo e %.2f", salario_novo);

    return 0;
}

// (7 / 100) is being calculated as integer division so the result is 0 since there are no decimals
// C decides what kind of division to perform based on the types of the operands, not the type of the variable you're eventually putting the result into

//	7 / 100		== 0
//	7.0 / 100	== 0.07