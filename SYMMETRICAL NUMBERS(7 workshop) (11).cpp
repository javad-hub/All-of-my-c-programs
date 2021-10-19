#include<stdio.h>
#include<conio.h>
int  main() {
	unsigned int i=0, num1, num2;
	printf("Enter a number:");
	scanf("%d",&num1);
	num2=num1;
	while(num1) {
		i=i*10+num1%10;
		num1/=10;
		printf("\n%d",i);
	}
	if(num2==i)
	printf("\nThe number is symmetrical! %d=%d",num2,i);
	else
	printf("\nThe number is not symmetrical! %d!=%d",num2,i);
	getch();
	return 0;
}
