#include<stdio.h>
#include<conio.h>
int  main() {
	unsigned int num, hour, per_hour;
	int i, n;
	float wage;
	printf("Enter the number of employees:");
	scanf("%d",&n);
	printf("\nEnter the wage per an hour:");
	scanf("%ld",&per_hour);
	for(i=1;i<=n;i++) {
		printf("\nEnter the employee's identification number:");
		scanf("%ld",&num);
		printf("\nEnter the working hour of the employee:");
		scanf("%d",&hour);
		if(hour>48) {
		wage=per_hour*hour*0.8*per_hour;
		printf("\nThe wage of the employee is %.2f",wage); }
		else
		wage=per_hour*hour;
		printf("\nThe wage of the employee is %.2f",wage);
	}
	getch();
	return 0;
}
