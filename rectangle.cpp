#include<stdio.h>
#include<conio.h>
int  main () {
int x, y;
printf("Enter the length and width of rectangle:");
scanf("%i%i",&x,&y);
printf("Area=%i",(x+y)/2);
printf("\tSurface=%i",x*y);
getch();
return 0;
}
