#include<stdio.h>
#include<conio.h>
int  main() {
	int i, n, num, min, max;
	printf("Enter the number of scores:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nEnter score %d:",i);
		scanf("%i",&num);
		if(i==1)
		max=min=num;
		if(num>=max)
		max=num;
		if(num<=min)
		min=num;
	}//End of for
	printf("\nMax=%i\t\tMin=%d",max,min);
	getch();
	return 0;
}
