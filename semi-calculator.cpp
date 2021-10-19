#include<stdio.h>
#include<conio.h>
int  main() {
	int a, b;
	char opra;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nEnter a oprator(+,-,*,/):");
	opra=getch();
	switch(opra){
		case '+':printf("\n%i+%i=%d",a,b,a+b);break;
		case '-':printf("\n%i-%i=%d",a,b,a-b);break;
		case '*':printf("\n%i*%i=%d",a,b,a*b);break;
		case '/':printf("\n%i/%i=%d",a,b,a/b);break;
	}
	getch();
	return 0;
}
