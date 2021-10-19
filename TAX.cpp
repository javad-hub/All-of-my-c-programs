#include<stdio.h>
#include<conio.h>
int  main() {
	const int salary=1000000;
	int wage;
	printf("Enter the salary of employee:");
	scanf("%d",&wage);
	if(wage>0 && wage<salary)
	printf("\nThe employee is exempt of paying tax!");
	else if(wage>=salary && wage<1500000)
	printf("\nThe employee is obligated to pay\"%.2f\"tax",wage*0.05);
	else if(wage>=1500000)
	printf("\nThe employee is obligated to pay\"%.2f\"tax",wage*0.1);
	getch();
	return 0;
}
