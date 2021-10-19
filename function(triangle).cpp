#include<stdio.h>
#include<conio.h>
int F(float a, float b, float c);
int main()  {
	float x, y, z;
	printf("Enter three numbers:");
	scanf("%f%f%f",&x,&y,&z);
	if(F(x,y,z))
	printf("\nThese numbers can make a triangle!");
	else
	printf("\nThese numbers can't make a triangle!");
	getch();
	return 0;
}
int F(float a, float b, float c){
	if((a>=b+c) || (b>=a+c) || (c>=a+b))
	return 0;
	else
	return 1;
}
