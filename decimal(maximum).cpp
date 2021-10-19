#include<stdio.h>
#include<conio.h>
int  main() {
	float a, b, c, max;
	printf("Enter three decimal numbers:");
	scanf("%f%f%f",&a, &b, &c);
	a>b?(a>c?max=a:c=max):(b>c?max=b:max=c);
	printf("\nThe maximum is %.3f",max);
	getch();
	return 0;
}
