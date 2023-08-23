#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
system("color A");
setlocale(LC_ALL,"Portuguese");
	float N[20], na[20];
	int r, t=0;
	
	for(r=0;r<=19;r++){
		printf("Digite uma nota: ");
		scanf("%f",&N[r]);
		system("cls");
		
		if(N[r]>=7.5){
			na[t]=N[r];
			t++;
		}
	}
	printf("As notas maiores ou iguais a 7,5 são:\n");
	for(r=0;r<t;r++){
		printf("%.2f\n",na[r]);
	}


}
