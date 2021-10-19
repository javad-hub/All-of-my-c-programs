#include<stdio.h>
#include<conio.h>
int F(int n, int i);
int  main() {
	int x, y;
	printf("Enter n:");
	scanf("%d",&x);
	printf("\nEnter i:");
	scanf("%d",&y);
	printf("\n%d",F(x,y));
	getch();
	return 0;
}
int F(int n, int i){
	if(i<=n)
	return (F(n, i+1)+i);
	else
	return 0;
}
