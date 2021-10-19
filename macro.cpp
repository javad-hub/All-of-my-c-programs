#include<stdio.h>
#include<conio.h>
#define SURFACE(a) a*a
int  main() {
	int a;
	printf("Enter the side of the square:");
	scanf("%d",&a);
	printf("\n The surface of the square is=%d",SURFACE(a));
	getch();
	return 0;
}
