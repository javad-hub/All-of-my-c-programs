#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main() {
	int x1,y1,x2,y2;
	float Distance;
	printf("Enter the cordinate of a point(x1,y1):");
	scanf("%d%d",&x1, &y1);
	printf("\nEnter the cordinates of another point(x2,y2):");
	scanf("%i%i",&x2, &y2);
	Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\nDistance between two points is=%.2f",Distance);
	getch();
	return 0;
}
