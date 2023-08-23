#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int i;
	printf("Digite sua idade: ");
	scanf("%i",&i);
	system("cls");
	if(i<16){
		printf("Não-eleitor");
	}
	if(i>=18 && i<65){
		printf("Eleitor obrigatório");
	}
	if(i==16 || i==17 || i>=65){
		printf("Eleitor facultativo");
	}
}
