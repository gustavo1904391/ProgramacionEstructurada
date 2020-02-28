#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391*/
int main(int argc, char *argv[]) {
	int a,cn=0;
	float prom, suma=0;
	printf("ESCRIBA EL NUMERO DESEADO: ");
	scanf("%d",&a);
	
	while(a>=0){
		cn=cn+1;
		suma=suma+a;
		printf("\nESCRIBA EL SIGUIENTE NUMERO: ");
		scanf("%d",&a);	
	}
	prom=suma/cn;
	printf("EL PROMEDIO ES : %.2f\n",prom);

	return 0;
}
