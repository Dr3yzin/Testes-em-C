#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int t;
	float c, k;
	erro:
	printf("selecione o tipo de carro: \n");
	printf("1-Tipo A \n");
	printf("2-Tipo B \n");
	printf("3-tipo C \n");
	scanf("%i",&t);
	system("cls");
	if(t>3 || t<1){
		printf("Erro na seleção do tipo de carro \nTente novamente \n");
		system("pause");
		system("cls");
		goto erro;
	}
	
	printf("Digite quantos Km o carro andou: ");
	scanf("%f",&k);
	if(t==1){
		c=k/8;
		printf("%.2f litros", c);
		
	}
	if(t==2){
		c=k/9;
		printf("%.2f litros", c);	
	}
	if(t==3){
		c=k/12;
		printf("%.2f litros", c);
	}

}
