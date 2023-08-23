#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int m[3][3], r, w=0, mmaior=0, sds=0;
	
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
	
	
	for(r=0;r<3;r++){
		if(m[r][r]>mmaior){
			mmaior=m[r][r];
		}
		sds+=m[r][2-w];
		w++;	
	}
	printf("O maior valor digitado na diagonal principal é %i\n",mmaior);
	printf("A soma da diagonal secundária da matriz digitada é %i",sds);
	
}
