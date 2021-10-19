#include<stdio.h>
#include<conio.h>
int  main() {
	int i, x, j, multi=0;
	printf("Enter two numbers:");
	scanf("%d%d",&x, &j);
	for(i=1;i<=j;i++){
		multi+=x;
		printf("\nx*j=%d",multi);
	}
	getch();
	return 0;
}
