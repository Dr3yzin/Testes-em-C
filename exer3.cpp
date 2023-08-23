#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int e;
	float v1,v2;
	printf("Escolha uma das opções:\n");
	printf("1-Soma\n");
	printf("2-Subtração\n");
	printf("3-Multiplicação\n");
	printf("4-Divisão\n");
	scanf("%i",&e);
	
	if(e==1){
		printf("Soma:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A soma é %.2f",v1+v2);
	}
	if(e==2){
		printf("Subtração:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A subtração é %.2f",v1-v2);
	}
	if(e==3){
		printf("Multiplicação:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A multiplicação é %.2f",v1*v2);
	}
	if(e==4){
		printf("Divisão:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A divisão é %.2f",v1/v2);
	}
	if(e>4){
		printf("Essa opção não existe");
	}
	
	
	
	
	
	
	
}
