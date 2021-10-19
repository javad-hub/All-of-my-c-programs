#include<stdio.h>
#include<conio.h>
int  main() {
	int side1, side2, side3;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&side1, &side2, &side3);
	if((side1*side1==side2*side2+side3*side3) ||
	side2*side2==side1*side1+side3*side3 ||
	side3*side3==side1*side1+side2*side2)
	printf("\nThe triangle is RIGHT ANGELED!");
	else
	printf("\nThe triangle is NOT RIGHT ANGELED!");
	getch();
	return 0;
}
