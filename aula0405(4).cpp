#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int r,f,ss=0,maiors=0;
	float s;
	
	for(r=0;r<=4,r++){
		salario:
		printf("Digite o salário: ");
		scanf("%f",&s);
		system("cls");
		if(s>=0){
			ss+=s;
		}
		else{
			printf("Erro ao digitar o salário\n");
			system("pause");
			system("cls");
			goto salario;
		}
		if(s>maiors){
			maiors==s;
		}
		
		printf("Digite o número de filhos: ");
		scanf("%i",&f);
		system("cls");
	}
}
