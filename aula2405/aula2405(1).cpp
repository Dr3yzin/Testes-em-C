#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int vet[10], i;
	float s;
	
	for(i=0;i<=9;i++){
		printf("Digite um valor inteiro: ");
		scanf("%d",&vet[i]);
		system("cls");
		
		if(vet[i]%2==0){
			s=vet[i]*1.02;
			printf("Par, %.2f\n",s);
			sleep(2);
			system("cls");
		}
		else if(vet[i]%2==1){
			s=vet[i]*1.05;
			printf("ímpar, %.2f\n",s);
			sleep(2);
			system("cls");
		}
	}
}
