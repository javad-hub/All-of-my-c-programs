#include<stdio.h>
#include<conio.h>
int  main() {
	int i, j, m=1;
	for(i=1;i<=10;i++)
	    for(j=1;j<=10;j++)
	    printf("\t%d*%d=%d",i,j,i*j);
    getch();
    return 0;
}
