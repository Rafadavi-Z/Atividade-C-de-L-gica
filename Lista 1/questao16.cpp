#include <stdio.h>
//#include <stdlib.h>

// Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
// a) A hora trabalhada vale a metade do salário mínimo;
// b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// c) O imposto equivale a 3% do salário bruto.
// d) O salário a receber equivale ao salário bruto menos o imposto


int main(){
   
    float sal_bru, horas_tra, imposto;

    printf("Digite as horas trabalhadas por semana\n");
    scanf("%f",&horas_tra);

    printf("Digite seu salario mensal\n");
    scanf("%f",&sal_bru);

    sal_bru = sal_bru / 2;

    printf("O valor da sua hora e %.2f\n", sal_bru);

    sal_bru = (4 * horas_tra) * sal_bru;

    printf("O seu salario bruto e %.2f\n", sal_bru);

    imposto = sal_bru * 0.03;
    
    printf("O valor pago em imposto e %.2f\n", imposto);

    sal_bru = sal_bru - imposto;

    printf("O valor a receber e %.2f\n", sal_bru);

    //system("pause");
    return 0;
}


