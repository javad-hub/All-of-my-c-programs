#include<stdio.h>
#include<conio.h>
int  main() {
	int x, y, i, pow=1;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("\nEnter the number you want to be powered with:");
	scanf("%i",&y);
	for(i=1;i<=y;i++)
	pow*=x;
	printf("\n%d^%d=%i",x,y,pow);
	getch();
	return 0;
}
