#include<stdio.h>
#include<conio.h>
int  main() {
	int i, num, sum=0;
	printf("Enter a number:");
	scanf("%i",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
		printf("\t%d",i);
		sum+=i;
	}//End of if
	}//End of for
	sum-=num;
	if(sum==num)
	printf("\nThe number is perfect!");
	else printf("\nThe number is not perfect!");
	getch();
	return 0;
}
