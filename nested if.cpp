#include<stdio.h>
#include<conio.h>
int  main() {
	int a, b, c;
	printf("Enter the sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
       if(b==c)
       printf("\nThe triangle is Equilateral!");
       else printf("\nThe triangle is Not Equilateral!");
       else printf("\nThe triangle is Not Equilateral!");
    getch();
    return 0;
}
