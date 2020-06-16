#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv []) {
	char a;
	printf("TECLEA LO QUE QUIERAS BRO,OJO SOLO UNA VEZ :v\n");
	a=getchar();
	int b=(int)a;
	if(48<=b && b<=57){
		printf("ES UN NUMERO");
	}
	else{
		if(65<=b && b<=90){
			printf("ES UNA MAYUSCULA");
		}
		else{
			if(97<=b && b<=122){
				printf("ES UNA MINUSCULA");
			}
		
		else{
			printf("ES UN CARACTER");}
		}
	}
	return 0;
}
