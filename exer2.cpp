#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
system("color A");
	int v1,v2;
	printf("Digite o primeiro valor: ");
	scanf("%i",&v1);
	
	printf("Digite o segundo valor: ");
	scanf("%i",&v2);
	
	if(v1>v2){
		printf("%i é o maior valor",v1);
	}
	if(v1<v2){
		printf("%i é o maior valor",v2);
	}
	if(v1==v2){
		printf("Os dois valores são iguais");
	}
	
	
	
}
