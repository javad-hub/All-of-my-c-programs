#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, j, x, y;
	printf("Enter two numbers:");
	scanf("%i%i",&x,&y);
	for(i=x;i>0;i--){
		if(x%i==0 && y%i==0)
		break;
	}
	printf("\nBiggest multiple is=%d",i);
	getch();
	return 0;
}
