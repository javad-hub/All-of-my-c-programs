#include<stdio.h>
#include<conio.h>
int  main() {
	float litre;
	float cubicmilimeters;
	float cubicdesimeters;
	float cubicmeters;
	float cc;
	printf("Enter the volume in litre:");
	scanf("%f",&litre);
	cubicmilimeters=litre*1000000000;
	cubicdesimeters=litre*1000000;
	cubicmeters=litre/1000;
	cc=litre*1000;
	printf("\nThe volume in cubic milimeters=%.f",cubicmilimeters);
	printf("\nThe volume in cubic desimeters=%.f",cubicdesimeters);
	printf("\nThe volume in cubic meters=%f",cubicmeters);
	printf("\nThe volume in cc is=%.f",cc);
	getch();
	return 0;
}
