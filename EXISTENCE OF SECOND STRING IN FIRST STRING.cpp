#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int  main() {
	char *str1, *str2;
	str1=(char*)malloc(100);
	str2=(char*)malloc(100);
	printf("Enter the first string:");
	gets(str1);
	printf("\nEnter the second string:");
	gets(str2);
	strstr(str1,str2);
	if((strstr(str1,str2)))
	printf("\n The second string exists in the first string");
	else
	printf("\nThe second string doesn't exist in the first string");
	free(str1);
	free(str2);
	getch();
	return 0;
}
