#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite o número: ");
	scanf("%i",&n);
	
	if(n/2){
		printf("%i é par",n);
	}
	else{
		printf("%i é ímpar",n);
	}


}
