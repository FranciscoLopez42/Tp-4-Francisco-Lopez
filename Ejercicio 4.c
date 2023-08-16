#include <stdio.h>
#include <stdlib.h>

int presion (int f, int a){
	int p=f/a;
	
	return p;
}
	int main(){
		float pre,fue,are;
		printf("Ingrese la fuerza: ");
		scanf("%f",&fue);
		printf("Ingrese el area: ");
		scanf("%f",&are);
		pre=presion(fue,are);
		printf("La presion es: %f\n",pre);
		
		system("pause");
		return 0;
	}
