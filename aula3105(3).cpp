#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int m[4][4], y, z, p[16];
	
	printf("Digie os 4 números da primeira linha:\n");
	scanf("%d%d%d%d",&m[0][0],&m[0][1],&m[0][2],&m[0][3]);
	
	printf("Digie os 4 números da segunda linha:\n");
	scanf("%d%d%d%d",&m[1][0],&m[1][1],&m[1][2],&m[1][3]);
	
	printf("Digie os 4 números da terceira linha:\n");
	scanf("%d%d%d%d",&m[2][0],&m[2][1],&m[2][2],&m[2][3]);
	
	printf("Digie os 4 números da quarta linha:\n");
	scanf("%d%d%d%d",&m[3][0],&m[3][1],&m[3][2],&m[3][3]);
	system("cls");

	printf("A matriz digitada:\n");
	printf("%d %d %d %d \n",m[0][0], m[0][1], m[0][2], m[0][3]);
	printf("%d %d %d %d \n",m[1][0], m[1][1], m[1][2], m[1][3]);
	printf("%d %d %d %d \n",m[2][0], m[2][1], m[2][2], m[2][3]);
	printf("%d %d %d %d \n",m[3][0], m[3][1], m[3][2], m[3][3]);
	sleep(2);
	
	
	printf("A matriz triangular inferior da matrz digiada:\n");
	
	for(y=0;y<4;y++){
		for(z=0;z<4;z++){
		
			if(z>y){
				m[y][z]=0;
			}
		}
	}
        
	printf("%d %d %d %d \n",m[0][0], m[0][1], m[0][2], m[0][3]);
	printf("%d %d %d %d \n",m[1][0], m[1][1], m[1][2], m[1][3]);
	printf("%d %d %d %d \n",m[2][0], m[2][1], m[2][2], m[2][3]);
	printf("%d %d %d %d \n",m[3][0], m[3][1], m[3][2], m[3][3]);


}
