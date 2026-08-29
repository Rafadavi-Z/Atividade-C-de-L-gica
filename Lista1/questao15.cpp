#include <stdio.h>

// O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço
// de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
// mostre:
// a) O valor correspondente ao lucro do distribuidor;
// b) O valor correspondente aos impostos.
// c) O preço final do veículo.


int main(){
   
    float preco_fab, lucro_dis, imposto; 
	
    printf("Digite o preco de fabrica do carro\n");
    scanf("%f",&preco_fab);

    printf("Digite a porcentagem de lucro do distribuidor\n");
    scanf("%f",&lucro_dis);

    printf("Digite a porcentagem de imposto\n");
    scanf("%f",&imposto);

    lucro_dis = preco_fab * (lucro_dis / 100);

    imposto = preco_fab * (imposto / 100);

    printf("O valor que o distribuidor vai lucrar e %.2f reais\n", lucro_dis);

    printf("O valor pago de imposto e de %.2f reais\n", imposto);

    preco_fab = preco_fab + imposto + lucro_dis;

    printf("O preco final do carro e de %.2f reais\n", preco_fab);

    return 0;
}


