#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*GUSTAVO ISRAEL TREVIÑO AGUILAR 1904391*/
int main(int argc, char *argv[]) {
	int X=10,Y=10,Z;
	Z=X+Y;
	printf("ENTEROS\n");
	printf("%d + %d=%d\n",X,Y,Z);
	Z=0;
	Z=X-Y;
	printf("%d - %d=%d\n",X,Y,Z);
	Z=0;
	Z=X*Y;
	printf("%d * %d=%d\n",X,Y,Z);
	Z=0;
	Z=X/Y;
	printf("%d / %d=%d\n",X,Y,Z);
	Z=0;
	Z=X%Y;
	printf("%d % %d=%d\n",X,Y,Z);
	Z=0;
	Z++;
	printf("0 ++ =%d\n",Z,Z);
	Z=0;
	Z--;
	printf("0 -- =%d\n",Z,Z);
	float A=15.5,B=10.1,C;
	printf("FLOTANTES\n");
	C=A+B;
	printf("%.2f + %.2f=%.2f\n",A,B,C);
	C=0;
	C=A-B;
	printf("%.2f - %.2f=%.2f\n",A,B,C);
	C=0;
	C=A*B;
	printf("%.2f * %.2f=%.2f\n",A,B,C);
	C=0;
	C=A/B;
	printf("%.2f / %.2f=%.2f\n",A,B,C);
	C=0;
	C=(A>B);
	
	printf("%.2f > %.2f=%d\n",A,B,C);
	C=(B<A);
	
	printf("%.2f < %.2f=%d\n",A,B,C);
	C=(B>=A);
	
	printf("%.2f >= %.2f=%d\n",A,B,C);
	C=(A<=B);
	
	printf("%.2f <= %.2f=%d\n\a",A,B,C);
	C==A;
	printf("%.2f == %.2f=%d\n\a",A,B,C);
	printf("CHAR\n");
	
	bool w,p;
	int r=2,t=5;
	w=r<t && t>=r;
	p=r==t || r>=t;
	printf("%d<%d && %d>=%d=%d\n",r,t,r,t,w);
	printf("%d==%d || %d>=%d=%d",r,t,r,t,p);
	return 0;
}
