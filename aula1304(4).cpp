#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	float s,p;
	
	printf("Digite qual o seu salário: ");
	scanf("%f",&s);
	
	system("cls");
	
	printf("Quanto é a prestação: ");
	scanf("%f",&p);
	
	system("cls");
	
	if(p>0.2*s){
		printf("Empréstimo não pode ser concedido");
	}
	else{
		printf("Empréstimo pode ser concedido");
	}
	
}
