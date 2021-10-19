#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, j, x, y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++)
		if(x%i==0)
		if(y%j==0)
		if(i==j)
		printf("\nSame multiples are %d",i);
	}
	getch();
	return 0;
}
