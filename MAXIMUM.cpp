#include<stdio.h>
#include<conio.h>
#define MAX(a,b) a>b?a:b
int  main() {
	int a, b;
	printf("Enter your desirable numbers:");
	scanf("%d%d",&a, &b);
	printf("\nThe maximum is=%d",(a,b));
	getch();
	return 0;
}
