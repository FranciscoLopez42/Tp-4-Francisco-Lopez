#include <stdio.h>
#include <stdlib.h>

int numeromayor (int num1, int num2){
	if(num1==num2)
		printf("Numero 1 y Numero 2 son iguales \n");
	else
		if (num1>num2)
			printf("El mayor es el primer numero \n");
		else
			printf("El mayor es el segundo \n");
	
	return 0;
}
	
	int main (){
		int n1, n2;
		printf("Ingrese el primer numero: ");
		scanf("%d",&n1);
		printf("Ingrese el segundo numero: ");
		scanf("%d",&n2);
		numeromayor(n1,n2);
		
		system("pause");
		return 0;
	}
		
