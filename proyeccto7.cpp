#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR*/
int main(int argc, char** argv) {
	int b, n, i, z = 0 ;
	printf ( "INGRESO EL NUMERO BASE A MULTIPLICAR: ");
	scanf ( "%d",&b);
	printf ("\nINGRESO LA CANTIDAD DE MULTIPLOS QUE DESEA VER EN PANTALLA: ");
	scanf ("%d",&n);
	for (i=0;i<=n;i ++){
		z=b*i;
		printf ( "\n %2d * %2d = %2d " ,b,i,z);
	}
	return 0;
}
