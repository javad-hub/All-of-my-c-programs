#include<stdio.h>
#include<conio.h>
struct detraction{
	int a, e;
};
int main()  {
	struct detraction x, y, upshot;
	printf("Enter the numinator of first detraction:");
	scanf("%i",&x.a);
	printf("\nEnter the denuminator of first detraction:");
	scanf("%d",&x.e);
	printf("\nEnter the numinator of second detraction:");
	scanf("%i",&y.a);
	printf("\nEnter the denuminator of second detraction:");
	scanf("%d",&y.e);
	printf("\n\nThe upshot is:");
	upshot.a=x.a*y.e+y.a*x.e;
	upshot.e=x.e*y.e;
	printf("\n(%d/%d)+(%d/%d)=\"%d/%d\"",x.a,x.e,y.a,y.e,upshot.a,upshot.e);
	upshot.a=x.a*y.e-y.a*x.a;
	upshot.e=x.e*y.e;
	printf("\n(%d/%d)-(%d/%d)=\"%d/%d\"",x.a,x.e,y.a,y.e,upshot.a,upshot.e);
	upshot.a=x.a*y.a;
	upshot.e=x.e*y.e;
	printf("\n(%d/%d)*(%d/%d)=\"%d/%d\"",x.a,x.e,y.a,y.e,upshot.a,upshot.e);
	upshot.a=x.a*y.e;
	upshot.e=x.e*y.a;
	printf("\n(%d/%d)/(%d/%d)=\"%d/%d\"",x.a,x.e,y.a,y.e,upshot.a,upshot.e);
	getch();
	return 0;
}
