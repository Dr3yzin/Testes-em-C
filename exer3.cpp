#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int e;
	float v1,v2;
	printf("Escolha uma das op��es:\n");
	printf("1-Soma\n");
	printf("2-Subtra��o\n");
	printf("3-Multiplica��o\n");
	printf("4-Divis�o\n");
	scanf("%i",&e);
	
	if(e==1){
		printf("Soma:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A soma � %.2f",v1+v2);
	}
	if(e==2){
		printf("Subtra��o:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A subtra��o � %.2f",v1-v2);
	}
	if(e==3){
		printf("Multiplica��o:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A multiplica��o � %.2f",v1*v2);
	}
	if(e==4){
		printf("Divis�o:\n");
		printf("Digite o primeiro valor: ");
		scanf("%f",&v1);
		
		printf("Digite o segundo valor: ");
		scanf("%f",&v2);
		
		printf("A divis�o � %.2f",v1/v2);
	}
	if(e>4){
		printf("Essa op��o n�o existe");
	}
	
	
	
	
	
	
	
}
