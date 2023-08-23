#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	float a,m,imc;
	printf("Digite sua altura em metros: ");
	scanf("%f",&a);
	system("cls");
	
	printf("Digite seu peso em Kg: ");
	scanf("%f",&m);
	system("cls");
	
	imc=m/(a*a);
	
	if(imc<=18.5){
		printf("Abaixo do peso");
	}
	if(imc>18.5 && imc<25){
		printf("Saudável");
	}
	if(imc>=25 && imc<30){
		printf("Peso em excesso");
	}
	if(imc>=30 && imc<35){
		printf("Obesidade grau 1");
	}
	if(imc>=35 && imc<40){
		printf("Obesidade grau 2(severa)");
	}
	if(imc>=40){
		printf("Obesidade grau 3(mórbida)");
	}
	
	
}
