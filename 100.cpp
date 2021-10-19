#include<stdio.h>
#include<conio.h>
int  main() {
	int i,n=0;
	float average, sum=0;
	for(i=1;i<=100;i++){
		printf("Enter the pupil's number:");
		scanf("%f",&average);
		if(average>=15){
			sum+=average;
			n+=1;
		}
	}
	printf("\nThe score average of pupils with the mark of higher than 15 is=%.2f",sum/n);
	getch();
	return 0;
}
