#include<stdio.h>
#include<conio.h>
int F(int a, int b);
int main()  {
	int x, y, p=0;
	printf("Enter two numbers:");
	scanf("%i%i",&x , &y);
	p=F(x,y);
	printf("\nNumber\"%d\" in the power of number\"%d\" is:%d",x,y,p);
	getch();
	return 0;
}
int F(int a, int b){
	static int i, n=1;
	for(i=1;i<=b;i++)
		n*=a;
	return n;
}
