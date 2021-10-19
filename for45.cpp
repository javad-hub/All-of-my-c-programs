#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	for(i=1;i<=200;i++)
	if(i%i==0)
	printf("\n%d",i);
	getch();
	return 0;
}
