#include<stdio.h>
#include<conio.h>
int  main() {
	const float i=2.54;
	float x;
	printf("Enter the length in inch:");
	scanf("%f",&x);
	printf("\n The length in centimeters is=%.3f",x*i);
	getch();
	return 0;
}
