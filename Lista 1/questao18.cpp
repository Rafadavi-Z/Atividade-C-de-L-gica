#include <stdio.h>

// Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas.
// A quantidade diária de ração fornecida para cada gato é sempre a mesma. 
// Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, 
// calcule e mostre quanto restará de ração no saco após cinco dias.

int main(){
   
    float kg, grama, cat_eat;

    printf("Qual o peso do saco em kg?\n");
    scanf("%f",&kg);

    printf("Quantos gramas um dos seus gatos come no dia?\n");
    scanf("%f",&cat_eat);

    cat_eat = (cat_eat * 2) * 5;
    grama = (kg * 1000) - cat_eat;

    printf("Depois de 5 dias restara %.2f gramas", grama);
	

    return 0;
}


