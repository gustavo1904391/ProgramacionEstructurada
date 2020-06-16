#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR*/
int main(int argc, char** argv) {
	int matriz[3][3],valor_escalar;
	int i,j;
	printf("\t\t\tmatriz");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nINGRESE EL VALOR DE SU MATRIZ EN LA POSICION [%d][%d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("\t%7d",matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n\n");
	printf("\nINGRESE SU VALOR ESCALAR: ");
	scanf("%d",&valor_escalar);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matriz[i][j]=matriz[i][j]*valor_escalar;
		printf("\t%7d",matriz[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
