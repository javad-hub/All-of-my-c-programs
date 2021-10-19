#include<stdio.h>
#include<conio.h>
#include<string.h>
int  main() {
	int i, x=0, z;
    char str[101];
    printf("Enter a string:");
    gets(str);
    while(str[x]!='\0'){
    	x++;
	}
	printf("\nString's length is %d",x);
	getch();
	return 0;
}
