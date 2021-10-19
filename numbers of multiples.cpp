#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, x, n=0;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++) {
		if(x%i==0)
			n+=1;
		else
		continue;
	}
	printf("\nNumber of multiples are= %d",n);
	getch();
	return 0;
}
