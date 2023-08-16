#include <stdio.h>
#include <stdlib.h>

int perimetro (int n1, int n2){
	int p=2*n1+2*n2;
	
	return p;
}
	int area (int n1, int n2){
		int a=n1*n2;
		
		return a;
	}
		int main(){
			int per,are,n1,n2;
			printf("Ingrese el primer valor: \n");
			scanf("%d",&n1);
			printf("Ingrese el segundo valor: \n");
			scanf("%d",&n2);
			per=perimetro(n1,n2); 
			are=area(n1,n2);
			printf("El perimetro es: %d\n", per);
			printf("El area es: %d\n", are);
			
			system("pause");
			return 0;
		}
			
