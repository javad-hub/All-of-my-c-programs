#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, n, salary, highest1, highest2, num1, num2, first, second;
	printf("Enter the number of the employees:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("\nEnter the employee's personal number:");
		scanf("%d",&num1);
		printf("\nEnter the employee's salary:");
		scanf("%ld",&salary);
		if((salary>highest1) && (salary>highest2))
		first=num1;
		printf("\nHighest salary is for employee number %d",num1);
		if(salary>highest2)
		printf("\nHighest salary is for employee number %d",num2);
	}
	getch();
	return 0;
}
