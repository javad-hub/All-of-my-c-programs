#include<stdio.h>
#include<conio.h>
#define FUNCTION(x) (x*x-2)/x
int  main() {
	long int x;
	printf("Enter your desirable number:");
	scanf("%d",&x);
	printf("\nAnswer =%ld",FUNCTION(x));
	getch();
	return 0;
}
