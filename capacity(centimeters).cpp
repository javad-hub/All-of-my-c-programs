#include<stdio.h>
#include<conio.h>
int  main() {
	int length, width, height;
	int x;
	printf("Enter the length,width and height of your shape:");
	scanf("%i%i%i",&length,&width,&height);
	x=length*width*height;
	printf("\nThe capacity of the shape is=%d cubic centimeters",x);
	getch();
	return 0;
}
