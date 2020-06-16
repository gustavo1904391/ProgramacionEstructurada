#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391*/
int main(int argc, char** argv) {
	int x,j=2,y,k=1 ;
	int cont=0 ;
	
	do {
	printf ( "\n ingresa el valor deseado positivo: " );
	scanf ( "%d",&x);
    } while (x<0 && x>100 );
	int ar[x];
	for(j=0;j<x;j++) {
		printf ( "\n ingrese el numero del arreglo [%d]: ",j+1 );
		scanf ( "%d" , &ar[j]);
	}
    for (j=0; j<x; j++) {
	cont=0 ;
	for(k=1;k<=ar[j];k++){
	    y=ar[j]%k;
		if(y==0){
			cont=cont+1;
		}	
	}	
	if (cont <=2 ) {
		printf ( " \n numero % d es primo " , ar[j]);
	} else  if (cont>=2 ) {
		printf ( " \n numero % d no es primo " , ar[j]);
	}
}

	return 0;
}
