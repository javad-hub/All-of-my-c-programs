#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	float k=1.0, m=0;
	for(i=1;i<=1000;i++)
	m+=k/i;
	printf("\nThe upshot of 1/1 + 1/2 + 1/3 + ... 1/1000 is=%f",m);
	getch();
	return 0;
}
