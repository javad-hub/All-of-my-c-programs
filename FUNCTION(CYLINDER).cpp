#include<stdio.h>
#include<conio.h>
float F(float r, float  h, float *s1, float *s2, float *c);
int main()  {
	float R, H, S1, S2, C;
	printf("Enter the radius and height of cylinder:");
	scanf("%f%f",&R,&H);
	F(R,H,&S1,&S2,&C);
	printf("\nSide ambiance of cylinder is:%.2f",S1);
	printf("\nBase ambiance of cylinder is:%.2f",S2);
	printf("\nVolume of the cylinder is:%.2f",C);
	getch();
	return 0;
}
float F(float r, float h, float *s1, float *s2, float *c){
	const float pi=3.14;
	float a=0, b=0 , d=0;
	a=2*pi*r*h;
	b=pi*(r*r);
	d=pi*h*(r*r);
	*s1=a;
	*s2=b;
	*c=d;
}
