#include <stdio.h>

// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include <math.h>

int main(){
   
    float num, num2, resultado; 
	
    printf("Digite o valor do numero que seja positivo\n");
    scanf("%f",&num);

    printf("Digite o valor de outro numero que tambem seja positivo\n");
    scanf("%f",&num2);

    if (num > 0 && num2 > 0)
    {

        resultado = pow(num,num2);
        printf("O primero numero elevado ao segundo e %.2f\n", resultado);

    }
    else
    {
        printf("Ei os dois numeros precisam ser positivos!!!!");
    }

    return 0;
}
