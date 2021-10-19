#include<stdio.h>
#include<conio.h>
#define Average(a,b,c,d) (a+b+c+d)/4
int  main() {
	float a, b, c, d;
	printf("Enter the scores of the student:");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("\nThe average is=%.2f",Average(a,b,c,d));
	getch();
	return 0;
}
