#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391*/
int main(int argc, char *argv[]) {
	char op;
	float a,b,c;

	scanf("%f",&a);
	scanf("%c",&op);
	scanf("%f",&b);
	
	switch(op){
		case '+': 
		         c=a+b;
	             printf("%.2f %c %.2f=%.2f",a,op,b,c);
		         break;
		case '-':
			     c=a-b;
			     printf("%.2f %c %.2f=%.2f",a,op,b,c);
			     break;
	    case '*':
	    	     c=a*b;
	    	     printf("%.2f %c %.2f=%.2f",a,op,b,c);
	    	     break;
	    case '/':
	    	     c=a/b;
	    	     printf("%.2f %c %.2f=%.2f",a,op,b,c);
	    	     break;
	    default:
	    	   printf("invalid operator\n");
		}
		

	
	return 0;
}
