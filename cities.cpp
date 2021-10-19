#include<stdio.h>
#include<conio.h>
int  main() {
	char pass[4], tr;
	int i;
	for(;;){
	printf("Enter the password:");
	pass[0]=getch();
	putchar('*');
	pass[1]=getch();
	putchar('*');
	pass[2]=getch();
	putchar('*');
	pass[3]=getch();
	putchar('*');
	if(pass[0]=='C' && pass[1]=='I' && pass[2]=='T' && pass[3]=='Y' ||
	pass[0]=='C' && pass[1]=='i' && pass[2]=='t' && pass[3]=='y' ||
	pass[0]=='c' && pass[1]=='i' && pass[2]=='t' && pass[3]=='y'){
		printf("\nFirst city is Newyork one of most crowded cities of the world with roughly 10 million people.Clearly transportation plays a vital role in that city so they have a complex public transportation system.");
		printf("\n\nSecond city is Tokyo with 30 million people,but can you see any pollution?No!The reason behind this is that they have a strict and diciplined administration on the commute of people.");}
		else
		printf("\nInvalid password! To try again press \"t\"");
		scanf("%c",&tr);
		if(tr=='t' || tr=='T')
		continue;
		else
		break;}
	getch();
	return 0;
}
