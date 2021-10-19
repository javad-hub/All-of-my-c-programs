#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
int  main() {
	int x1, x2, x3, year, month, day;
	long int student, phone;
	char name[20], last[25], gender, country[25], city[25], address[100];
	one:
	printf("\t\t\t\t\t^^^Academical virtual system^^^");
	printf("\n\nPlease select your desirable choice:");
	printf("\n\n1.Enroll in classes");
	printf("\n\n2.Personal page");
	printf("\n\n3.Exit");
	scanf("%d",&x1);
	if(x1==1){
		printf("\nEnter your firstname:");
		scanf("%s",name);
		printf("\nEnter your surename:");
		scanf("%s",last);
		printf("\nWhat is your gender?(M/F)");
		gender=toupper(getche());
		printf("\nEnter your age in date:");
		scanf("%d%d%d",&year,&month,&day);
		printf("\nEnter your country and city:");
		scanf("%s%s",country,city);
		printf("\nEnter your current address:");
		scanf("%s",address);
		printf("\nEnter your student number:");
		scanf("%li",&student);
		printf("\nEnter a phone number:");
		scanf("%ld",&phone);
		printf("\n\n\nYou have successfully signed in.\nfirstname=%s\t\tsurename=%s\t\tyour gender=%c\tyour age in date=%d %d %d\tyour country and city=%s %s\tyour current address=%s\t  your student number=%li\t your phone number=%ld",name,last,gender,year,month,day,country,city,address,student,phone);
		printf("\n\nExpect an e-mail from us in two days.");
		printf("\nTo return to the main page press'4'");
		scanf("%d",&x3);
		if(x3==4)
		goto one;
	}
	else if(x1==2){
		printf("\n\n\t\t\t\t\t\t\tWelcome back!");
		printf("\n\nUser:Bahar vafajoo");
		printf("\nStudent number:47890012341");
		printf("\nCountry/city:U.S.A/California");
		printf("\nGrade:sixth");
		printf("\nCurrent school:oxford");
		printf("\n\n1.Virtual classes");
		printf("\n2.Scores");
		scanf("%i",&x2);
		if(x2==1){
			printf("\n_________________________________________________________");
			printf("\n\n\t\tSaturday\tSunday\t\tMonday\t\tTuesday\t\tWednesday\tThursday\tFriday");
			printf("\n\nAtended classes:Biology\t\tHistory\t\tLitarture\tMathematics\tScinence\tGeometry\tGeography");
			printf("\nHours:\t\t13:30-15:00\t16:00-17:15\t18:00-19:45\t7:30-9:00\t10:15-12:00\t14:00-17:00\t19:15-20:15");
			printf("\n_________________________________________________________");
			printf("\n\nRemaining classes:Sport\t\tDefence\t\t\t\tGeology\t\t\t\tZoology");
			printf("\nHours:\t\t7:30-8:15\t12:00-13:30\t\t\t17:15-16:45\t\t\t19:00-20:00");
			printf("\nTo return to the main page press'4'");
			scanf("%d",&x3);
			if(x3==4)
			goto one;
		}
		else if(x2==2){
			printf("\n_________________________________________________________");
			printf("\n\nSubject:\tPhisics \tChemistery\tWorkshop\tEssay\t\tBiology\t\tScience");
			printf("\nMark:\t\t17.5\t\t18\t\tNot revised yet\t20\t\t19\t\tNot revised yet");
			printf("\nTo return to main page press'4'");
			scanf("%i",&x3);
			if(x3==4)
			goto one;
		}
	}
	else if(x1==3)
	exit(0);
	getch();
	return 0;
}
