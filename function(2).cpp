#include<stdio.h>
#include<conio.h>
/*This program calculates the equation of x*x*x/x*x+x+1*/
int  main() {
float x;
printf("Enter the value of X:");
scanf("%f",&x);
printf("\nAnswer=%f",(x*x*x)/(x*x+x+1));
getch();
return 0;
}
