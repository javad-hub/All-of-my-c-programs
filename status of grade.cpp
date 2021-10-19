#include<stdio.h>
#include<conio.h>
int  main() {
	float m;
	printf("Enter the score of pupil:");
	scanf("%f",&m);
	if(m>0 && m<=9)
	printf("\nFailed!");
	else if(m>=10 && m<14)
	printf("\nOrdinary!");
	else if(m>=14 && m<16)
	printf("\nGood!");
	else if(m>=16 && m<18)
	printf("\nVery good!");
	else if(m>=18 && m<=20)
	printf("\nExcellent!");
	getch();
	return 0;
}
