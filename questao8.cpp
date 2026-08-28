#include <stdio.h>

// Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main(){
    
    float depo, txj, rendi, total; 
	int meses;
	
    printf("Digite o valor do seu deposito\n");
    scanf("%f",&depo);
    
    printf("Digite a taxa de juros mensal\n");
    scanf("%f",&txj);
	
    printf("Digite quantos meses o investimento ficara rendendo\n");
    scanf("%d",&meses);  
    
    txj = txj / 100;
    
    total = depo;
	
	for(int i = 1; i <= meses; i++) {
		
		//total = depo * txj; ----> aqui está o erro do pq o loop só conta uma vez
		total = total + (total * txj);
	}
	
	rendi = total - depo;	
	
    printf("Seu montante e %.2f e seu rendimento e %.2f", total, rendi);

    return 0;
}
