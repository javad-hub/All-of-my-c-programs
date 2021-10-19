#include<stdio.h>
#include<conio.h>
#define AREA1(x,y) (x+y)*2
#define SURFACE1(x,y) x*y
#define AREA2(a,b,c) a+b+c
#define SURFACE2(h,p) (h*p)/2
#define AREA3(r) (r*2)*3.14
#define SURFACE3(r) r*r*3.14
int  main() {
	float x, y, a, b, c, h, p, r;
	printf("Enter the length and width of rectangle:");
	scanf("%f%f",&x,&y);
	printf("\nEnter the sides of triangle:");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nEnter the height and base of triangle:");
	scanf("%f%f",&h,&p);
	printf("\nEnter the radius of circle:");
	scanf("%f",&r);
	printf("\n********************************\n\n\nThe area of rectangle is=%.2f",AREA1(x,y));
	printf("\n\n\n\nThe surface of rectangleis=%.2f",SURFACE1(x,y));
	printf("\n\n\n\n\nThe area of triangle is=%.2f",AREA2(a,b,c));
	printf("\n\n\n\n\n\nThe surface of triangle is=%.2f",SURFACE2(h,p));
	printf("\n\n\n\n\n\n\nThe area of circle is=%.2f",AREA3(r));
	printf("\n\n\n\n\n\n\n\nThe surface of circle is=%.2f",SURFACE3(r));
	printf("\n\n\n\n\t\t\t\t\tThe area of entire shape is=%.2f",AREA1(x,y)+AREA2(a,b,c)+AREA3(r));
	printf("\n\n\n\n\t\t\t\t\tThe surface of entire shape is=%.2f",SURFACE1(x,y)+SURFACE2(h,p)+SURFACE3(r));
	getch();
	return 0;
}
