#include <stdio.h>
#include <stdlib.h>
int porcentajeh (int h, int m){
	int ph=h*100/(h+m);
	
	return ph;
}
	int porcentajem (int h, int m){
		int pm=m*100/(h+m);
		
		return pm;
	}
		int main(){
			float ph,pm,h,m;
			printf("Ingrese la cantidad de hombres: \n");
			scanf("%f",&h);
			printf("Ingrese la cantidad de mujeres: \n");
			scanf("%f",&m);
			ph=porcentajeh(h,m);
			pm=porcentajem(h,m);
			printf("El porcentaje de hombres es: %f\n", ph);
			printf("El porcentaje de mujeres es: %f\n", pm);
			
			system("pause");
			return 0;
		}
			
