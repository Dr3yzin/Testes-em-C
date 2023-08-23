#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int d;
	volta:
	printf("Digite o número 1 a 7: ");
	scanf("%i",&d);
	system("cls");
	switch(d){
		case 1:{
			printf("Domingo");
			break;
		}
		case 2:{
			printf("Segunda");
			break;
		}
		case 3:{
			printf("Terça");
			break;
		}
		case 4:{
			printf("Quarta");
			break;
		}
		case 5:{
			printf("Quinta");
			break;
		}
		case 6:{
			printf("Sexta");
			break;
		}
		case 7:{
			printf("Sábado");
			break;
		}
		default:
			printf("Esse dia não existe, tente novamente \n");
			system("pause");
			system("cls");
			goto volta;
	}
}
