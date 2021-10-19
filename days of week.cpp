#include<stdio.h>
#include<conio.h>
int  main() {
	int num;
	printf("Enter a number from 1 to 7:");
	scanf("%d",&num);
	switch(num){
		case 1:printf("\nSaturday");break;
		case 2:printf("\nSunday");break;
		case 3:printf("\nMonday");break;
		case 4:printf("\nTuesday");break;
		case 5:printf("\nWednesday");break;
		case 6:printf("\nThursday");break;
		case 7:printf("\nFriday");break;
		default:printf("\nInvalid");
	}
	getch();
    return 0;
}
