#include<stdio.h>
#include<conio.h>
#define POUNDTOGRAM (454)
int  main() {
	float x;
	printf("Enter the weight in pound:");
	scanf("%f",&x);
	printf("\n The weight in gram is=%.2f",x*POUNDTOGRAM);
	getch();
	return 0;
}
