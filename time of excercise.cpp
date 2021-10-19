#include<stdio.h>
#include<conio.h>
int  main() {
	int a;
	printf("Enter your age:");
	scanf("%i",&a);
	if(a>=1 && a<=7)
	printf("\nYou need to excercise at least 1 hours a day.");
	else if(a>=8 && a<=14)
	printf("\nYou need to excercise at least 2 to 3 hours a day.");
	else if(a>=15 && a<=20)
	printf("\nYou need to excercise at least 3 to 3.5 hours a day.");
	else if(a>=21 && a<=30)
	printf("\nYou need to excercise at least 2 to 2.5 hours a day.");
	else if(a>=31 && a<=40)
	printf("\nYou need to excercise at least 1.5 to 2 hours a day.");
	else if(a>=41 && a<=50)
	printf("\nYou need to excercise at least 1.5 hours a day.");
	getch();
	return 0;
}
