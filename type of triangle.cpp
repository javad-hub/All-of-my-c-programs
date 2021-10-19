#include<stdio.h>
#include<conio.h>
int  main() {
	int side1, side2, side3;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&side1, &side2, &side3);
	if((side1*side1==side2*side2+side3*side3 ||
	side2*side2==side1*side1+side3*side3 ||
	side3*side3==side1*side1+side2*side2))
    {printf("\nThe triangle is RIGHT ANGLE!");}
	else if(side1==side2 || side1==side3 || side2==side3)
	{printf("\nThe triangle is DUALSIDE EQUAL TRIANGLE!");}
	else
	printf("\nThe triangle is VARIABLE SIDE TRIANGLE!");
	getch();
	return 0;
}

