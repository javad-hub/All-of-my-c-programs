#include<stdio.h>
#include<conio.h>
int F(int a);
int main()  {
	int x;
	printf("Enter the number of the term:");
	scanf("%d",&x);
	printf("\nTerm number %i in Fibonachi series is:%d",x,F(x));
	getch();
	return 0;
}
int F(int a){
	if(a>=3)
	return F(a-1)+F(a-2);
	else
	return 1;
}
