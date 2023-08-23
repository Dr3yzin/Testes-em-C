#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int m[3][3], y, z, w=0;
	
	printf("Digie os 3 números da primeira linha:\n");
	scanf("%d%d%d",&m[0][0],&m[0][1],&m[0][2]);
	
	printf("Digie os 3 números da segunda linha:\n");
	scanf("%d%d%d",&m[1][0],&m[1][1],&m[1][2]);
	
	printf("Digie os 3 números da terceira linha:\n");
	scanf("%d%d%d",&m[2][0],&m[2][1],&m[2][2]);
	system("cls");
	
	printf("A matriz digitada:\n");
	printf("%d %d %d \n",m[0][0], m[0][1], m[0][2]);
	printf("%d %d %d \n",m[1][0], m[1][1], m[1][2]);
	printf("%d %d %d \n",m[2][0], m[2][1], m[2][2]);
	sleep(2);
	system("cls");
	
	
	
	for(y=0;y<3;y++){
		for(z=0;z<3;z++){
		
			if(m[y][z]<0 && y!=z && z!=2-w){
				m[y][z]=0;
			}
		}
		w++;
	}
	printf("A matriz digitada com os valores substituidos com exceção das diagonais principal e secundária:\n");
	printf("%d %d %d \n",m[0][0], m[0][1], m[0][2]);
	printf("%d %d %d \n",m[1][0], m[1][1], m[1][2]);
	printf("%d %d %d \n",m[2][0], m[2][1], m[2][2]);
	
}
