#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int n,t,r;
	numero:
	printf("Digite um número: ");
	scanf("%i",&n);
	system("cls");
	if(n==0){
		printf("Erro na seleção do número, tente novamente\n");
		system("pause");
		system("cls");
		goto numero;
	}
	for(t=1;t<=10;t++){
		r=n*t;
		printf("%i * %i = %i\n",n,t,r);
	}
}
