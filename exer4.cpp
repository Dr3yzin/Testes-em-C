#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite o n�mero: ");
	scanf("%i",&n);
	
	if(n/2){
		printf("%i � par",n);
	}
	else{
		printf("%i � �mpar",n);
	}


}
