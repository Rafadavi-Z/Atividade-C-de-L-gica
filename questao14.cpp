#include <stdio.h>

// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre:
// a) A idade dessa pessoa.
// b) Quantos anos essa pessoa terá em 2050

#include <time.h>

int main(){
   
    int ano_nasc, ano_atual, idade; 
	
    printf("Em qual ano que voce nasceu?\n");
    scanf("%d",&ano_nasc);

    time_t t2 = time(NULL);
    struct tm *local_time = localtime(&t2);
    ano_atual = local_time->tm_year + 1900;

    idade = ano_atual - ano_nasc;

    printf("Sua idade neste ano e de %d\n", idade);

    idade = 2050 - ano_nasc;

    printf("Sua idade em 2050 sera de %d\n", idade);

    return 0;
}

// time(NULL) : retorna os segundos desde 1 de janeiro de 1970
// time_t : data type usada para guardar uma grande quantidade de dados em segundos, t2 é a variavel que guarda os dados
// localtime() : transforma os dados de segundos em anos, dias, horas, minutos e segundos baseado no fuso horario do computador

// struct tm *local_time: ??? tem alguma coisa haver com ponteiro, não entendi

// local_time->tm_year : de todas as opções pega apenas o ano, mas como começa a contar apartir de 1900, 2026 sairia como 126 por isso adicionamos "+ 1900"


