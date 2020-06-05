#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct datos{
	int grado;
	int matricula;
	char nombre1[10];
	char nombre2[10];
	char apeido1[10];
	char apeido2[10];
	char nom_completo[40];
	char carrera[10];
	char escuela[30];
	char mes[10];
	char sexo[8];
	int dia;
	int year;
};

int main(int argc, char *argv[]) {
	struct datos dat[10];
	int i;
	int opcion;
	for(i=0;i<2;i++){
		printf("ingrese la matricula del alumno: ");
		scanf("%d",&dat[i].matricula);		
		printf("\ningrese el primer nombre del alumno: ");
		fflush(stdin);
		scanf("%s",&dat[i].nombre1);
		strcat(dat[i].nom_completo,dat[i].nombre1);
		strcat(dat[i].nom_completo," ");
		printf("\nopcion1=si\topcion2=no");
		printf("\ntiene segundo nombre: ");
		scanf("%d",&opcion);
		if(opcion==1){
			printf("\ningrese su segundo nombre: ");
			fflush(stdin);
			scanf("%s",&dat[i].nombre2);
	    	strcat(dat[i].nom_completo,dat[i].nombre2);
	        strcat(dat[i].nom_completo," ");
		}else if(opcion==2){
			printf("\nokey pipol");
		}
		printf("\ningrese el primer apeido: ");
		fflush(stdin);
		scanf("%s",&dat[i].apeido1);
		strcat(dat[i].nom_completo,dat[i].apeido1);
	    strcat(dat[i].nom_completo," ");
	    printf("\ningrese el segundo apeido: ");
	   	fflush(stdin);
		scanf("%s",&dat[i].apeido2);
		strcat(dat[i].nom_completo,dat[i].apeido2);
	    strcat(dat[i].nom_completo," ");
	    printf("\nfecha de nacimiento \n");
	    printf("\ningrese el mes: ");
	   	fflush(stdin);
	    scanf("%s",&dat[i].mes);
	    printf("\ndia: ");
	   	fflush(stdin);
	    scanf("%d",&dat[i].dia);
	    printf("\nyear: ");
	   	fflush(stdin);
	    scanf("%d",&dat[i].year);
	    printf("\ningrese el grado: ");
	    fflush(stdin);
	    scanf("%d",&dat[i].grado);
	    printf("\ningrese la carrera: ");
	   	fflush(stdin);
	    scanf("%s",&dat[i].carrera);
	    printf("\ningrese la escuela: ");
	   	fflush(stdin);
	    scanf("%s",&dat[i].escuela);
	    printf("\ningrese el sexo: ");
	   	fflush(stdin);
	    scanf("%s",&dat[i].sexo);
	    system("cls");
	}
	for(i=0;i<2;i++){
		printf("\n%d",dat[i].matricula);
		printf("\n%s",dat[i].nom_completo);
		printf("\n%d/%s/%d",dat[i].dia,dat[i].mes,dat[i].year);
		printf("\n%d grado",dat[i].grado);
		printf("\n%s",dat[i].carrera);
		printf("\n%s\n%s",dat[i].escuela,dat[i].sexo);
		printf("\n\n");
	}
	return 0;
}
