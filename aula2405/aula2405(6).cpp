#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int c[5], p[5], ca[5], cb[5], a=0, b=0, co=0, r;
	float pa=0;
	
	for(r=0;r<5;r++){
		printf("Digite o codigo do produto: ");
		scanf("%i",&c[r]);
		printf("Digite o preço: ");
		scanf("%i",&p[r]);
		system("cls");
		
		if(p[r]<50){
			ca[a]=c[r];
			a++;
		}
		else if(p[r]>=50 && p[r]<=100){
			cb[b]=c[r];
			b++;
		}
		else if(p[r]>100){
			pa+=p[r];
			co++;
		}
	}
	printf("Os produtos a baixo de R$50 são:\n");
	for(r=0;r<a;r++){
		printf("%i\n",ca[r]);
	}
	
	printf("\nOs produtos entre R$50 e R$100 são:\n");
	for(r=0;r<b;r++){
		printf("%i\n",cb[r]);
	}
	
	printf("\nA média de preço dos produtos a cima de R$100 é: %.2f", pa/co);
	
	
	
	
}
