#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main() {
	int i, j, x;
    float sinx, y, z;
	x=1;
	z=1;
	printf("Enter a angle's degree in radian:");
	scanf("%f",&y);
	for(i=1;i<=10;i++){
		for(j=1;j<i*2;j++)
		z*=j;
		sinx=sinx+x*pow(x,2*i-1)/z;
		x*=-1;
	}
	printf("\nsin%f= %f",y,sinx);
	getch();
	return 0;
}
