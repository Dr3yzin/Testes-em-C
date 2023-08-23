#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	FILE *arquivo;
	char cadastro[300];
	int e;
	
	arquivo=fopen("C:\Users\Cliente\OneDrive\Área de Trabalho\Ead1\1\alunos.txt","a");
	while(e!=3){
		while(e<1 || e>3){
			printf("Escolha o que deseja fazer:\n");
			printf("1-Cadastrar aluno\n");
			printf("2-Mostrar alunos cadastrados\n");
			printf("3-Encerrar\n");
			scanf("%i",&e);
			system("cls");
			
			if(e==1){
				printf("Digite os dados a ser armazenado: \n");
				gets(cadastro);
			}
			else if(e==2){
				fprintf(arquivo,"%s\n",cadastro);
			}
			else{
				printf("Erro na seleção, tente novamente");
				sleep(2);
				system("cls");
			}
		}
	}
	fclose(arquivo);
	
	
	
}
