#include<stdio.h>
#include<conio.h>
int  main() {
	int n, m;
	do{
		printf("Enter your number:");
		scanf("%d",&n);
		if(n>=100 && n<=999)
		m++;
	}while(n>0);
	printf("\nThe number of triple digits is=%d",m);
	getch();
	return 0;
}
