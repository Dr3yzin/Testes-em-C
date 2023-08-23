#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");

	int i,n,c,nr=0,nb=0,no=0;
	float media, mio=0;
	
	for(c=1;c<=5;c++){
	
		idade:
		printf("Digite a idade: ");
		scanf("%i",&i);
		system("cls");
		if(i<=0){
			printf("Idade invalida\n");
			system("pause");
			system("cls");
			goto idade;
		}
		
		nota:
		printf("De uma nota:\n");
		printf("1-Regular\n");
		printf("2-Bom\n");
		printf("3-Ótimo\n");
		scanf("%i",&n);
		system("cls");
		if(n==1){
			nr++;
		}
		else if(n==2){
			nb++;
		}
		else if(n==3){
			no++;
			mio+=i;
		}
		else{
			printf("Erro na seleção da nota\n");
			system("pause");
			system("cls");
			goto nota;
		}
	}
	media=(no*100)/(nr+nb+no);
	printf("A média das idades de quem deu nota 3 é %.2f\n",mio/5.0);
	printf("%i deram nota 1\n",nr);
	printf("%.2f%% dos usuariario deram nota 2\n",media);
	
}
