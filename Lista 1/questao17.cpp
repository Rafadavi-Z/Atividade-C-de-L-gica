#include <stdio.h>

// Um trabalhador recebeu seu salário e depositou em sua contra corrente bancária. 
// Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. 
// Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.

int main(){
   
    float sal, cheq1, cheq2; 
	
    printf("Digite seu salario\n");
    scanf("%f",&sal);

    printf("Digite o valor dos cheques\n");
    scanf("%f %f", &cheq1, &cheq2);

    sal = sal + (cheq1 - (cheq1 * 0.0038)) + (cheq2 - (cheq2 * 0.0038));

    printf("Seu saldo atual e de %.2f\n", sal);

    return 0;
}


