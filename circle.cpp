#include<stdio.h>
#include<conio.h>
int  main() {
float radius;
printf("Enter the radius of circle:");
scanf("%f",&radius);
printf("Area=%f",3.14*(2*radius));
printf("\tSurface=%f",3.14*(radius*radius));
getch();
return 0;
}
