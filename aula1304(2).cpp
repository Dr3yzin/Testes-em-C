#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int d,s,r;
	float t;
	printf("Quantos dias o jogo ser� alugada? ");
	scanf("%i",&d);
	erro:
		system("cls");
	printf("Qual a cor do selo? \n");
	printf("1-Verde \n");
	printf("2-Amarelo \n");
	printf("3-Branco \n");
	printf("4-Rosa \n");
	scanf("%i",&s);
	if(s>4 || 0>=s){
		printf("Erro na sele��o do selo \n");
		goto erro;
	
	}

	volta:
		system("cls");
	printf("Deseja pagar a vista? \n");
	printf("1-Sim \n");
	printf("2-n�o \n");
	scanf("%i",&r);
	switch(r){
	case 1:{
		
	
	
	switch(s){
		case 1:{
			t=d*8*0.95;
			printf("Voc� deve pagar R$%.2f",t);
			
			break;
		}
		case 2:{
			t=d*8.5*0.95;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		case 3:{
			t=d*12*0.95;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		case 4:{
			t=d*10*0.95;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		default:
			printf("Erro na sele��o do selo");
			goto erro;
	}
		break;
	}
	case 2:{

	switch(s){
		case 1:{
			t=d*8;
			printf("Voc� deve pagar R$%.2f",t);
			
			break;
		}
		case 2:{
			t=d*8.5;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		case 3:{
			t=d*12;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		case 4:{
			t=d*10;
			printf("Voc� deve pagar R$%.2f",t);
			break;
		}
		default:
			printf("Erro na sele��o do selo");
			goto erro;
	}
	
			break;
	}	
	
	default:
		printf("Erro na sele��o de resposta");
		goto volta;
}

	
	
	
}
