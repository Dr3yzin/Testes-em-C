#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int p[10], v[10], r, a=0;
	
	for(r=0;r<10;r++){
		printf("Digite quantas pe�a o vendedor %i vendeu: ",r+1);
		scanf("%i",&p[r]);
		printf("Digite o valor dessa pe�a: ");
		scanf("%i",&v[r]);
		system("cls");
		a+=p[r];
	}
	printf("Foi vendido um total de %i pe�as\n\n",a);
	for(r=0;r<10;r++){
		printf("O vendedor %i deu um lucro de %i\n",r+1,p[r]*v[r]);
	}
	
	






}
