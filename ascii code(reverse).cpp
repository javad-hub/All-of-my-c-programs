#include<stdio.h>
#include<conio.h>
int  main() {
	int x;
	printf("Enter the ASCII code:");
	scanf("%i",&x);
	printf("\nThe character is=%c",char(x));
	getch();
	return 0;
}
