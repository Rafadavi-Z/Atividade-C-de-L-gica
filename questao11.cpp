#include <stdio.h>

// Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// a) O número digitado ao quadrado.
// b) O número digitado ao cubo.
// c) A raiz quadrada do número digitado.
// d) A raiz cúbica do número digitado.

#include <math.h>

int main(){
   
    float num, resultado; 
	
    printf("Digite o valor do numero que seja positivo\n");
    scanf("%f",&num);

    if (num > 0)
    {

        resultado = pow(num,2);
        printf("O quadrado do numero e %.2f\n", resultado);

        resultado = pow(num,3);
        printf("O cubo do numero e %.2f\n", resultado);

        resultado = pow(num,1/2.0);
        printf("A raiz quadrada do numero e %.2f\n", resultado);

        resultado = pow(num,1/3.0);
        printf("A raiz cubica do numero e %.2f\n", resultado);

    }
    else
    {
        printf("Ei eu disse para ser positvo, voce nao me ouviu?");
    }

    return 0;
}
