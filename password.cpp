#include<stdio.h>
#include<conio.h>
int  main() {
	char a[6];
	printf("Enter the password:");
	a[0]=getch();
	putchar('*');
	a[1]=getch();
	putchar('*');
	a[2]=getch();
	putchar('*');
	a[3]=getch();
	putchar('*');
	a[4]=getch();
	putchar('*');
	a[5]=getch();
	putchar('*');
	if(a[0]=='p' && a[1]=='u' && a[2]=='f' && a[3]=='f' && a[4]=='y')
	printf("\nAccess granted!");
	else
	printf("\nAccess denied!");
	getch();
	return 0;
}
