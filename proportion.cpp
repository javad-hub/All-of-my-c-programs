#include<stdio.h>
#include<conio.h>
int  main() {
	int x, y, z, sum, x1, x2, x3;
	float mult;
	long int total;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x, &y, &z);
	x1=x;
	x2=y;
	x3=z;
	printf("\nEnter the total amount:");
	scanf("%i",&total);
	sum=x+y+z;
	mult=total/sum;
	x*=mult;
	y*=mult;
	z*=mult;
	printf("\nThe ratio of %d and %d and %d in %d is= %i and %i and %i",x1,x2,x3,total,x,y,z);
	getch();
	return 0;
}
