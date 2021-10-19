#include<stdio.h>
#include<conio.h>
int  main() {
	int side1, side2, side3;
	int surface, area;
	int base, height;
	printf("Enter sides of thee triangle:");
	scanf("%d%d%d",&side1, &side2, &side3);
	if((side1*side1==side2*side2+side3*side3 ||
	side2*side2==side1*side1+side3*side3 ||
	side3*side3==side1*side1+side2*side2)) {
	printf("\nThe triangle is RIGHT ANGLED! enter the base and height:");
	scanf("%i%i",&base, &height);
	surface=(base*height)/2;
	area=side1+side2+side3;
	printf("\nThe surface is=%i and the area is=%i",surface, area); }
	else
	printf("\nThe triangle is not RIGHT ANGLED!");
	getch();
	return 0;
}
