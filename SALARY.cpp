#include<stdio.h>
#include<conio.h>
int  main () {
	float x;
	printf("Enter the salary of the employee:");
	scanf("%f",&x);
	printf("\nTax=%.1f",x*0.1);
	printf("\ninsurance=%.1f",x*0.17);
	printf("\nremaining salary=%.1f",x*0.1+x*0.17-x);
	getch();
	return 0;
}
