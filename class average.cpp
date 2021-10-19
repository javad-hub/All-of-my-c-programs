#include<stdio.h>
#include<conio.h>
/*This program can calculates a class's average*/
int  main() {
	int i, n, m;
	float sum=0;
	printf("Enter the number of students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n\nEnter the students average:");
		scanf("%f",&m);
		sum+=m;
	}//End of for
	printf("\nThe total average of class is=%.2f",sum/n);
	getch();
	return 0;
}
