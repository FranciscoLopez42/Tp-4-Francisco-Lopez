#include <stdio.h>
#include <stdlib.h>

int resistencias (int r1, int r2, int r3, int r4, int r5){
	int rt=r1+r2+r3+r4+r5;
	printf("La resistencia total es: %d\n",rt);
	
	return rt;
}
	int main (){
		float r1,r2,r3,r4,r5,rt;
		printf("Ingrese las 5 resistencias: \n");
		scanf("%f",&r1);
		scanf("%f",&r2);
		scanf("%f",&r3);
		scanf("%f",&r4);
		scanf("%f",&r5);
		rt=resistencias(r1,r2,r3,r4,r5);
		
		system("pause");
		return 0;
	}
		
