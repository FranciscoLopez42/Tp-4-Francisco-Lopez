#include <stdio.h>
#include <stdlib.h>

int octava(int a){
	float oct=a/8;
	printf("La octava parte de su numero es: %f\n",oct);
	
	return oct;
}
	int main (){
		float a,oct;
		printf("Ingrese un numero: ");
		scanf("%f",&a);
		oct=octava(a);
		
		system("pause");
		return 0;
	}
