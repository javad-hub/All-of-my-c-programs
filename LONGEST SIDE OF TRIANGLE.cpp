#include<stdio.h>
#include<conio.h>
#define long(a,b,c) a>b?(a>c?max=a:max=c):(b>c?max=b:max=c)
int  main() {
	float a, b, c, max;
	printf("Enter three sides of triangle:");
	scanf("%f%f%f",&a, &b, &c);
	printf("\nThe longest side is=%.2f",long(a,b,c));
	getch();
	return 0;
}
