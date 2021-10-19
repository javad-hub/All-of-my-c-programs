#include<stdio.h>
#include<conio.h>
int  main() {
	float a, b, c, max;
	printf("Enter three vary numbers:");
	scanf("%f%f%f",&a, &b, &c);
	a>b?(c>a?max=c:max=a):(c>b?max=c:max=b);
	printf("\nThe Maximum is=%.2f",max);
	getch();
	return 0;
}
