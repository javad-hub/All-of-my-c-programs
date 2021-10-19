#include<stdio.h>
#include<conio.h>
int  main() {
	char n[10];
	printf("Enter the sort of the fish:");
	scanf("%s",n);
	if(n[0]=='c' && n[1]=='a' && n[2]=='r' && n[3]=='n' && n[4]=='i' && n[5]=='v' && n[6]=='o' && n[7]=='r' && n[8]=='e' ||
	n[0]=='C' && n[1]=='A' && n[2]=='R' && n[3]=='N' && n[4]=='I' && n[5]=='V' && n[6]=='O' && n[7]=='R' && n[8]=='e' ||
	n[0]=='C' && n[1]=='a' && n[2]=='r' && n[3]=='n' && n[4]=='i' && n[5]=='v' && n[6]=='o' && n[7]=='r' && n[8]=='e')
	printf("\n1-These kind of fish should be fed at least twice a day.\n**********************************\n2-Their main food is frozen organisims with meat texture.\n**********************************\n3-Their water is primarily saltine.");
	else if(n[0]=='h' && n[1]=='e' && n[2]=='r' && n[3]=='b' && n[4]=='i' && n[5]=='v' && n[6]=='o' && n[7]=='r' && n[8]=='e' ||
	n[0]=='H' && n[1]=='E' && n[2]=='R' && n[3]=='B' && n[4]=='I' && n[5]=='V' && n[6]=='O' && n[7]=='R' && n[8]=='E' ||
	n[0]=='H' && n[1]=='e' && n[2]=='r' && n[3]=='b' && n[4]=='i' && n[5]=='v' && n[6]=='o' && n[7]=='r' && n[8]=='e')
	printf("\n1-These breed of fish should be fed at least once a day.\n**************************************\n2-Their foods vary from frozen blood worms to powder nutrition.\n**************************************\n3-Their water is primarily sweet.");
	getch();
	return 0;
}
