#include <stdio.h>
#include <stdlib.h>

int numeros (int n1, int n2){
	printf("%d\n",n1);
	printf("%d\n",n2);
    
	return 0;
}
	int main (){
		int n1,n2;
		printf("Ingrese un numero: ");
		scanf("%d",&n1);
		printf("Ingrese otro numero: ");
		scanf("%d",&n2);
		numeros(n1,n2);
		
		system("pause");
		return 0;
	}
