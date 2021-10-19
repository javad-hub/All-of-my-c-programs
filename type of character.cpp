#include<stdio.h>
#include<conio.h>
int  main() {
	char a;
	printf("Enter your intended character:");
	scanf("%c",&a);
	if(a=='a' || a=='y' || a=='u' || a=='i' || a=='o' ||
	a=='A' || a=='U' || a=='Y' || a=='I' || a=='O') {
		printf("\nThe character is a vowel!");
	}
	else if(a>='A' && a<='Z' ||
	a>='a' && a<='z') {
		printf("\nThis character is a constanant");
	}
	else if(a>='0' && a<='9') {
		printf("\nThis character is a number");
	}
	else {
	printf("\nThis character is among others"); }
	getch();
	return 0;
}
