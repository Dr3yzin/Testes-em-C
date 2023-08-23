#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int m[6][6], y, z, x;
	char c[6][20];
	
	strcpy(c[0], "Cáceres");
	strcpy(c[1], "BBugres");
	strcpy(c[2], "Cuiabá");
	strcpy(c[3], "VGrande");
	strcpy(c[4], "Tangará");
	strcpy(c[5], "PLacerda");
	
	for(y=0;y<6;y++){
		for(z=0;z<6;z++){
			
			if(y!=z){
				printf("Digite a distância em Km entre %s e %s: ",c[y],c[z]);
				scanf("%i",&m[y][z]);
				system("cls");
			}
			else if(y==z){
				m[y][z]=0;
			}
		}	
	}
	
	printf("A matriz com a distância entre as cidades em Km ficou:\n");
	for(y=0;y<6;y++){
		for(z=0;z<6;z++){
		
			printf("%i ",m[y][z]);
			
		}
		printf("\n");
	}
	sleep(2);
	system("cls");
	
	x=m[2][1]+m[1][3]+m[3][4]+m[4][5]+m[5][0];
	
	printf("Caso queira fazer uma viagem passando em ordem por %s %s %s %s %s %s\n",c[2],c[1],c[3],c[4],c[5],c[0]);
	printf("vai ser percorrido %iKm",x);



}
