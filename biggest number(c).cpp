#include<stdio.h>
#include<conio.h>
int  main() {
	long int a, b, c, d;
	printf("Enter four mischlaneous numbers:");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	if(a>=b && a>=c && a>=d) {
	    printf("\nThe biggest number is=%i",a); }
	if(b>=a && b>=c && b>=d) {
		printf("\nThe biggest number is=%i",b);
	}
	if(c>=a && c>=b && c>=d) {
		printf("\nThe biggest number is-%i",c);
	}
	if(d>=a && d>=b && d>=c) {
		printf("\nThe biggest number is=%i",d);
	}
	getch();
	return 0;
}
