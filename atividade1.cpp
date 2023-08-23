#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	float w,x,y,z,a,b,c;
	printf("Atividade 1 \n");
	printf("\n1) \n");
	printf("Digitie o total de eleitores: \n");
	scanf("%f",&x);
	printf("Digite o total de votos a favor: \n");
	scanf("%f",&y);
	printf("Digite o total de votos contra: \n");
	scanf("%f",&z);
	printf("Digite o total de votos nulo: \n");
	scanf("%f",&w);
	a=(100*y)/x;
	b=(100*z)/x;
	c=(100*w)/x;
	printf("%.2f%% votam a favor \n",a);
	printf("%.2f%% votam contra \n",b);
	printf("%.2f%% votam nulo \n",c);
	system("pause");
	
	
}
