#include<stdio.h>
#include<conio.h>
int  main() {
	long int a;
	printf("Enter your number:");
	scanf("%i",&a);
	printf("\n%ld*4=%ld",a,a<<2);
	printf("\n%ld/4=%ld",a,a>>2);
	getch();
	return 0;
}
