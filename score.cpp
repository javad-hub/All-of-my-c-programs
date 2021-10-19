#include<stdio.h>
#include<conio.h>
int  main () {
	int c;
	int d;
	printf("Enter the letter (C):");
	scanf("%d%d",&c,&d);
	if(c<=d) {
	printf("\nThe score of question 1= 1.5");
	printf("\nThe score of question 2=2");
	printf("\nThe score of question 3=1.25");
	printf("\nThe score of question 4=0.75");
	printf("\nThe score of question 5=1.25");
	printf("\nThe score of question 6=3.5");
	printf("\nThe score of question 7=2.25");
	printf("\nThe score of question 8=2.25");
	printf("\nThe score of question 9=1.75");
	printf("\nThe score of question 10=2"); }
	else {
	printf("\nInvalid number!"); }
	getch();
	return 0;
}
