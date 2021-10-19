#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<ctype.h>
int  main() {
	int pass[4], x, s=1000, i, v;
	printf("\t\t\t\t\t\t\t$$$$Municipal Bank$$$$");
	printf("\n\n\n\nEnter your password:");
	pass[0]=tolower(getch());
	putchar('*');
	pass[1]=tolower(getch());
	putchar('*');
	pass[2]=tolower(getch());
	putchar('*');
	pass[3]=tolower(getch());
	putchar('*');
	if(pass[0]=='p' && pass[1]=='a' && pass[2]=='s' && pass[3]=='s'){
		printf("\nStandby");
		for(i=0;i<4;i++){
		sleep(1);
		printf("$");}
		printf("\nValid!");
		printf("\nPress any key to continue.....");
		getch();
		one:
			printf("\n\n1.Take out money");
			printf("\n2.Paid in money");
			scanf("%d",&x);
			if(x==1){
				printf("\nYour current deposit is=%d$",s);
				printf("\nEnter the amount of money you wish to take out:");
				scanf("%d",&v);
				s-=v;
				printf("\nYour remaning deposit is=%d$",s);
				printf("\nmenu(1)------exit(2)");
				scanf("%d",&i);
				switch(i){
				case 1:goto one;
				case 2:exit(0);}
			}
			if(x==2){
				printf("\nYour current deposit is=%d$",s);
				printf("\nEnter the amount of money you wish to paid in:");
				scanf("%d",&v);
				s+=v;
				printf("\nYour deposit after augment is=%d$",s);
				printf("\nmenu(1)------exit(2)");
				scanf("%d",&i);
				switch(i){
				case 1:goto one;
				case 2:exit(0);}
			}
	}
	else 
		printf("\nStandby");
		for(i=0;i<4;i++){
		sleep(1);
		printf("$");}
	printf("\nInvalid!");
	getch();
	return 0;
}
