#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite 3 número");
	scanf("%i%i%i",&a,&b,&c);
	if(a>b && b>c){
		printf("A ordem crescente é %i, %i, %i",c,b,a);
	}
	if(b>a && a>c){
		printf("A ordem crescente é %i, %i, %i",c,a,b);
	}
	if(b>c && c>a){
		printf("A ordem crescente é %i, %i, %i",a,c,b);
	}
	if(c>b && b>a){
		printf("A ordem crescente é %i, %i, %i",a,b,c);
	}
	if(c>=a && a>=b){
		printf("A ordem crescente é %i, %i, %i",b,a,c);
	}
	if(a>=c && c>=b){
		printf("A ordem crescente é %i, %i, %i",b,c,a);
	}
}

