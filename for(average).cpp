#include<stdio.h>
#include<conio.h>
int  main() {
	int i, n, mark, m=0;
	printf("Enter the number of students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nEnter the average of each student:");
		scanf("%i",&mark);
		if(mark>=10 && mark<=15)
		m+=1;
	}
	printf("\nThe number of students with the average between 10 and 15 is=%d",m);
	getch();
	return 0;
}
