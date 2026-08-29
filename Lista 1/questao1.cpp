#include <stdio.h>

// Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main(){
    
    int num1, num2, num3, num4, soma;
    
    printf("Digite o valor do primeiro numero ");
    scanf("%d",&num1);
    printf("Digite o valor do segundo numero ");
    scanf("%d",&num2);
    printf("Digite o valor do terceiro numero ");
    scanf("%d",&num3);
    printf("Digite o valor do quarto numero ");
    scanf("%d",&num4);

    soma = (num1 + num2 + num3 + num4);
    
    //printf("Seu resultado e %d", &soma); ----> aqui esta o erro de mostrar um numero gigante no resultado. (possivelmente ele o endereço na memória)
	
    printf("Seu resultado e %d", soma);

    return 0;
}

// &soma means the memory address of soma, scanf needs the address where it should store the input but printf normally needs the value, not the memory address.
