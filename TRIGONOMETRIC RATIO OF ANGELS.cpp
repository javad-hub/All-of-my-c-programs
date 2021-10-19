#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main() {
	float D;
	float R;
	printf("Enter the degree of the angle:");
	scanf("%f",&D);
	R=(D*3.14)/180;
	printf("\nSinus of the angel is=%.3f",sin(R));
	printf("\tCosinus of the angel is=%.3f",cos(R));
	printf("\nTangent of the angel is=%.3f",tan(R));
	printf("\tCotangent of the angel is=%.3f",1/(tan(R)));
	getch();
	return 0;
}
