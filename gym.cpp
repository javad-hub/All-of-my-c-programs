#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
int  main() {
	char name[20], last[30], gender, shape1=6, shape2=2;
	int age, phone[15], main, final;
	one:
	printf("\t\t\t\t\t\t%c%c%cSUN SHINE GYM%c%c%c",shape1,shape1,shape1,shape1,shape1,shape1);
	printf("\n\n1.Enroll");
	printf("\n2.Gym's schedule");
	printf("\n3.Exit");
	printf("\nPress one of this numbers please.....");
	scanf("%d",&main);
	if(main==1){
		printf("\n\nEnter your name:");
		scanf("%s",name);
		printf("\nEnter your surename:");
		scanf("%s",last);
		printf("\nEnter your gender:(F,M)");
		gender=toupper(getch());
		printf("\nEnter your age:");
		scanf("%i",&age);
		printf("\nEnter your phone number:");
		scanf("%s",phone);
		printf("\n%c%c%c%cYou have successfully signed in%c%c%c%c",shape2,shape2,shape2,shape2,shape2,shape2,shape2,shape2);
		printf("\nName:%s\tSurename:%s\t\tGender:%c\tAge:%d\t\tPhone number:%s",name,last,gender,age,phone);
		printf("\nTo return to the main menu press(1) to Exit press(2)");
		scanf("%i",&final);
		switch(final){
			case 1:goto one;break;
			case 2: exit(0);break;
		}
	}
	if(main==2){
		printf("\n\nDays:Saturday\tSunday*\t\tMonday*\t\tTuesday\t\tWednesday*\tThursday\tFriday");
		printf("\n\nSports:Soccer\tVolleyball\tBasketball\tBadminton\tSoccer\t\tKungfu\t\tBasketball");
		printf("\n\n(*) means that day is for women.");
		printf("\n\nThe gym is open from 8:00 to 20:00.Each period is 1:45 minutes.");
		printf("\n\nTo return to the main menu press(1) to Exit press(2)");
		scanf("%i",&final);
		switch(final){
			case 1:goto one;break;
			case 2: exit(0);break;
		}
	}
	if(main==3)
	exit(0);
	getch();
	return 0;
}
