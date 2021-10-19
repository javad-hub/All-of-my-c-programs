#include<stdio.h>
#include<conio.h>
int  main() {
	int day;
	printf("Enter a number from 1 to 365:");
	scanf("%i",&day);
	if(day>=1 && day<=31)
	printf("\nThis day is in month 1 (January) or (Farvardin)");
	else if(day>=32 && day<=62)
	printf("\nThis day is in month 2 (Febuary) or (Ordibehesht)");
	else if(day>=63 && day<=93)
	printf("\nThis day is in month 3 (March) or (khordad)");
	else if(day>=94 && day<=124)
	printf("\nThis day is in month 4 (April) or (Tir)");
	else if(day>=125 && day<=155)
	printf("\nThis day is in month 5 (May) or (Mordad)");
	else if(day>=156 && day<=186)
	printf("\nThis day is in month 6 (June) or (Shahrivar)");
	else if(day>=187 && day<=216)
	printf("\nThis day is in month 7 (July) or (Mehr)");
	else if(day>=217 && day<=246)
	printf("\nThis day is in month 8 (August) or (Aban)");
	else if(day>=247 && day<=277)
	printf("\nThis day is in month 9 (September) or (Azar)");
	else if(day>=278 && day<=307)
	printf("\nThis day is in month 10 (October) or (Dei)");
	else if(day>=308 && day<=337)
	printf("\nThis day is in month 11 (November) or (Bahman)");
	else if(day>=338 && day<=365)
	printf("\nThis day is in month 12 (December) or (Esfand)");
	getch();
	return 0;
}
