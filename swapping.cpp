#include<stdio.h>
#include<conio.h>
int  main() {
int x, y;
printf("Enter the first number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping first=%d and second=%d",x,y);
getch();
return 0;
}


