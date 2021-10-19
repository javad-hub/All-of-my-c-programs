#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	float x, m=0;
	for(i=1;i<=100;i++){
	printf("Enter 100 decimal numbers:");
	scanf("%f",&x);
	m+=x;}
	printf("\nSum of the numbers is%.3lf",i);
	getch();
	return 0;
}
