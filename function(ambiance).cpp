#include<stdio.h>
#include<conio.h>
float F(float r);
int main()  {
	float R;
	printf("Enter the radius of circle:");
	scanf("%f",&R);
	printf("\nThe ambiance of the circle is %f",F(R));
	getch();
	return 0;
}
float F(float r){
	float x;
	x=3.14*r*r;
	return x;
}
