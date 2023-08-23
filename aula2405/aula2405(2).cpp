#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	int A[5], B[5], r, s=0;
	
	for(r=0;r<=4;r++){
		printf("Digite o número da posição %i do vetor A: ",r+1);
		scanf("%i",&A[r]);
		system("cls");
	}
	for(r=0;r<=4;r++){
		printf("Digite o número da posição %i do vetor B: ",r+1);
		scanf("%i",&B[r]);
		system("cls");
	}
	for(r=0;r<=4;r++){
		s+=B[4-r]-A[r];
	}
	printf("A soma das subtrações foi %i",s);

}
