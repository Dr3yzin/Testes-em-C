#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	float s,p;
	
	printf("Digite qual o seu sal�rio: ");
	scanf("%f",&s);
	
	system("cls");
	
	printf("Quanto � a presta��o: ");
	scanf("%f",&p);
	
	system("cls");
	
	if(p>0.2*s){
		printf("Empr�stimo n�o pode ser concedido");
	}
	else{
		printf("Empr�stimo pode ser concedido");
	}
	
}
