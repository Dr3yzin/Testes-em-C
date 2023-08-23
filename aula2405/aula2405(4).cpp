#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int re[40], g[40], r, nf=0;
	
	for(r=0;r<=39;r++){
		resposta:
		printf("Digite a resposta para questão %i\n",r+1);
		printf("1-A\n");
		printf("2-B\n");
		printf("3-C\n");
		printf("4-D\n");
		scanf("%i",&re[r]);
		system("cls");
		if(re[r]>4 || re[r]<1){
			printf("Erro na seleção da sua resposta, tente novamente");
			sleep(1);
			system("cls");
			goto resposta;
		}
	}
	printf("prova finalizada");
	sleep(2);
	system("cls");
	for(r=0;r<=39;r++){
		gabarito:
		printf("Digite o gabarito da questão %i: ",r+1);
		scanf("%i",&g[r]);
		system("cls");
		
		if(g[r]==re[r]){
			nf++;
		}
		else if(g[r]>4 || g[r]<1){
			printf("Erro na digitação do gabarito, tente novamente");
			sleep(1);
			system("cls");
			goto gabarito;
		}
	}
	printf("O aluno acertou %i/40",nf);

}
