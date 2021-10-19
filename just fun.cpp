#include<stdio.h>
#include<conio.h>
int  main() {
	int i, n;
	printf("Enter a number:");
	scanf("%d",&n);
		if((n>=1 && n<=100) && (n%2==0))
			printf("\nThe number is between 1-100 and is a multiple of 2");
	else if((n>=1 && n<=100) && (n%2!=0))
	printf("\nYour number is between 1-100 but is not a multiple of 2");
	else if(n>100)
	printf("\nYour number is simply beyond limits");
	getch();
	return 0;
}
