#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite a nota: ");
	scanf("%i",&n);
	
	if(n>=0 && 1>=n){
		printf("Conceito E");
	}
	if(n>=2 && 3>=n){
		printf("Conceito D");
	}
	if(n>=4 && 5>=n){
		printf("Conceito C");
	}
	if(n>=6 && 7>=n){
		printf("Conceito B");
	}
	if(n>=8 && 9>=n){
		printf("Conceito A");
	}
	if(n<0 || n>9)
		printf("Nota invalida");

	
		
}
