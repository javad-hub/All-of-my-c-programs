#include<stdio.h>
#include<conio.h>
int  main() {
	unsigned long int day;
	unsigned int month, year, week;
	printf("Enter your age is days:");
	scanf("%ld",&day);
	year=day/365;
	day%=365;
	month=day/30;
	day%=30;
	week=day/7;
	day%=7;
	printf("\nYour age is");
	if(year)
	printf("%d years",year);
	if(month)
	printf("%d months",month);
	if(week)
	printf("%d weeks",week);
	if(day)
	printf("%ld days",day);
	getch();
	return 0;
}
