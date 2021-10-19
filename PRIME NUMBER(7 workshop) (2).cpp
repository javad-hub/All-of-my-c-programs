#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main() {
	int i, x, prime;
	prime=1;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0){
			prime=0;
			break;
		}
		if(prime)
		printf("\nThe number is prime!");
		else
		printf("\nThe number is not prime!");
	getch();
	return 0;
}
