#include<stdio.h>
#include<conio.h>
int  main() {
	unsigned long int second, minute, hour, day, year, month;
	printf("Enter your age:");
	scanf("%d",&year);
	month=year*12;
	day=month*30+6;
	hour=day*24;
	minute=hour*60;
	second=minute*60;
	printf("\nYou have lived %ld seconds");
	getch();
	return 0;
}
