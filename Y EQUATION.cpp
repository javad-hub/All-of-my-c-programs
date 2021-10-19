#include<stdio.h>
#include<conio.h>
int  main() {
	int x, y;
	printf("Enter the value of X:");
	scanf("%d",&x);
    if(x<1) {
    	y=3*x-2;
    	printf("\nThe value of \"Y\" is=%i",y);
	}
    else if(x==1) {
    	y=2;
    	printf("\nThe value of \"Y\" is=%i",y);
	}
	else if(x>1) {
		y=3*x-5;
		printf("\nThe value of \"Y\" is=%i",y);
	}
    getch();
    return 0;
}
