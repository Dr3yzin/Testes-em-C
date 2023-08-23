#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	char a[40],b[40],c[40];
	float x,y,z;
	printf("Digite o nome do primeiro ganhador: \n");
	scanf("%s",&a);
	printf("Digite quantos pontos %s tem: \n",a);
	scanf("%f",&x);
	
	printf("Digite o nome do segundo ganhador: \n");
	scanf("%s",&b);
	printf("Digite quantos pontos %s tem: \n",b);
	scanf("%f",&y);
	
	printf("Digite o nome do terceiro ganhador: \n");
	scanf("%s",&c);
	printf("Digite quantos pontos %s tem: \n",c);
	scanf("%f",&z);
	
	
	printf("%s ganhou R$%.2f\n",a,500000*(x/(x+y+z)));
	printf("%s ganhou R$%.2f\n",b,500000*(y/(x+y+z)));
	printf("%s ganhou R$%.2f\n",c,500000*(z/(x+y+z)));



system("pause");	
}
