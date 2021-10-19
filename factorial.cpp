#include<stdio.h>
#include<conio.h>
int  main() {
	int i, x, f=1;
	printf("Enter a number:");
	scanf("%i",&x);
	for(i=1;i<=x;i++)
	f*=i;
	printf("\n%d!=%ld",x,f);
	getch();
	return 0;
}
