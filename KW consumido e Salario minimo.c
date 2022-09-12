#include <stdio.h>
/*
Sabendo que 100Kw de energia custa um s�timo do sal�rio m�nimo, fa�a um programa em C 
que receba o valor do sal�rio m�nimo e a quantidade de Kw gasta por uma resid�ncia, 
calcule e imprima o valor em reais de cada Kw, o valor em reais a ser pago e o novo 
valor a ser pago por essa resid�ncia com um desconto de 10%.
*/
int main(){
	printf("===== SALARIO MINIMO E O KW GASTO POR RESIDENCIA ===== \n");
	
	float salarioMin;
	float kwConsumida;
	float valorKw;
	float valorPago;
	float valorDesconto;
	
	printf("Digite o valor do Salario Minimo: R$ ");
	scanf("%f", &salarioMin);
	
	printf("Quantidade consumida na residencia em Kw: ");
	scanf("%f", &kwConsumida);
	
	valorKw = (salarioMin/7)/100;
	printf("Valor do Kw: R$ %.2f \n", valorKw);
	
	valorPago = kwConsumida * valorKw;
	printf("Valor a ser pago: R$ %.2f \n", valorPago);
	
	valorDesconto = valorPago - (valorPago * 0.10);
	printf("Valor a pagar com 10 porcento de desconto: R$ %.2f \n", valorDesconto);
}

