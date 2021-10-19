#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float average;
int  main() {
	int i, n;
	float max, min, *f;
	f=(float*)malloc(n*sizeof(float));
	if(!(f=(float*)malloc(n*sizeof(float)))){
		printf("Allocation Error!");
		exit(1);
	}
	printf("How many numbers do you want to input?");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		printf("\n\nEnter number %d:",i+1);
		scanf("%f",f+i);
		if(i==0)
		min=max=*f;
		average+=*(f+i);
		if(*(f+i)>max)
		max=*(f+i);
		if(*(f+i)<min)
		min=*(f+i);
	}
	free(f);
	average/=n;
	printf("\n\nMaxiumum is %.2f------Minimum is %.2f------Average is %.2f",max,min,average);
	getch();
	return 0;
}
