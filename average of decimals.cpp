#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	double x, m=0;
	for(i=1;i<=100;i++){
		printf("Enter 100 decimal numbers:");
		scanf("%f",&x);
		m+=x;
		m/=100;
	}
	printf("\nAverage of the numbers is=%lf",m);
	getch();
	return 0;
}
