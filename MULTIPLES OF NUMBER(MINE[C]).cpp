#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, x;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++) {
		if(x%i==0)
		printf("\t%d",i);
		else
		continue;
	}
	getch();
	return 0;
}
