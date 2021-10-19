#include<stdio.h>
#include<conio.h>
int  main() {
	const float grade=10;
	float mark;
	printf("Enter the score of pupil:");
	scanf("%f",&mark);
	if(0<mark && mark<grade)
	printf("\nFailed!");
	else if(mark>=grade && mark<=20)
	printf("\nPassed!");
	getch();
	return 0;
}
