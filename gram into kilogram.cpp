#include<stdio.h>
#include<conio.h>
int  main() {
	long int gram;
	printf("Enter the object`s weight is grams:");
	scanf("%ld",&gram);
	if(gram<1000)
	printf("The weight=%ld grams",gram);
	else
	printf("The weight is=%ld kilograms %ld grams",gram/1000,gram%1000);
	getch();
	return 0;
}
