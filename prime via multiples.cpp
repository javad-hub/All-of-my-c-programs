#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, x,n=0;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++) {
		if(x%i==0)
		n+=1;
		else
		continue;
	}//End of for
		if(n<=2)
		printf("\nThe number is prime!");
		else
		printf("\nThe number is not prime!");
	getch();
	return 0;
}
