#include <stdio.h>
#include <stdlib.h>

/* GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391 */

int main(){
	int i=0, Contador=-1;
	float Promedio, SumTotal=0;
	printf("Programa que le ingresan solo numeros positivos, y calcula el promedio de los ingresados\n");
	
	do{
		SumaTot= SumTotal + i;
		Contador++;
		printf("Ingrese un numero cualquiera:");
		scanf("%d", &i);
	}
	while(i>=0);
	    if(Contador==0){
	    	Contador=1;
		}
	    Promedio = SumTotal/Contador;
	    printf("El promedio de los numeros registrados es de %.2f\n", Promedio);
	

	return 0;
}
