#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	printf("Enter your desirable letter:");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122) {
	    printf("\nThe capital of this letter is=%c",ch^32); }
	if(ch>=65 && ch<=90) {
		printf("\nThe small letter of this is=%c",ch^32); }
	getch();
	return 0;
}
