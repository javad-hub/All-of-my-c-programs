#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int  main() {
	int x1, x2, x3, x4, i;
	char opinion2, finish, exit1, return1;
	two:
	printf("\t\t\t\t\t\t~~$$PAPA JOES'S PIZZARIA$$~~");
	printf("\n\n\n\nSelect the desirable choice:");
	printf("\n************************");
	printf("\n\n1.Reserve a table (1)");
	printf("\n\n2.Takeout (2)");
	printf("\n\n3.Feedback (3)");
	printf("\n\n4.Exit (4)");
	scanf("%d",&x1);
	if(x1==1) {
		printf("\nWhich table do you want?(choose a number from 1-12)");
		scanf("%i",&x2);
		switch(x2) {
			case 1:printf("\nTable is reserved! (:");break;
			case 2:printf("\nTable is reserved! (:");break;
			case 3:printf("\nThis table is already reserved! ):");break;
			case 4:printf("\nTable is reserved! (:");break;
			case 5:printf("\nTable is reserved! (:");break;
			case 6:printf("\nTable is reserved! (:");break;
			case 7:printf("\nThis table is already reserved! ):");break;
			case 8:printf("\nTable is reserved! (:");break;
			case 9:printf("\nThis table is already reserved! ):");break;
			case 10:printf("\nTable is reserved! (:");break;
			case 11:printf("\nTable is reserved! (:");break;
			case 12:printf("\nThis table is already reserved! ):");break;
		}
	}
	else if(x1==2) {
		printf("\n\t\t\tOrder your desirable food and it we will get it to you in no TIME!!! (;");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n\nFoods");
		printf("\t\t\t\t\t\t\tprice");
		printf("\t\t\tOrder number");
		printf("\n\n\nPapa Joes's special pizza (1)\t\t\t\t30$\t\t\t(1)");
		printf("\nMargarita pizza(cheese,olive,fungus)\t\t\t14$\t\t\t(2)");
		printf("\nBlogna rolet(meat blogna,slasa sause)\t\t\t15$\t\t\t(3)");
		printf("\nPeperoni pizza(sausage,hot chili,mushroom)\t\t13$\t\t\t(4)");
		printf("\nCheese pizza(famous dutch cheese,dark olive,sausage)\t16$\t\t\t(5)");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nSide dish");
		printf("\n\n\nFrench fries\t\t\t\t\t\t10$\t\t\t(6)");
		printf("\nSeason salad\t\t\t\t\t\t8$\t\t\t(7)");
		printf("\nSalsa and chips\t\t\t\t\t\t7$\t\t\t(8)");
		printf("\nMini tacos\t\t\t\t\t\t5$\t\t\t(9)");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nDeserts");
		printf("\n\nCup cake\t\t\t\t\t\t2$\t\t\t(10)");
		printf("\nChocolate puffy\t\t\t\t\t\t4$\t\t\t(11)");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nDrinks");
		printf("\n\nSoda pop\t\t\t\t\t\t2$\t\t\t(12)");
		printf("\nWater\t\t\t\t\t\t\t1$\t\t\t(13)");
		printf("\nMilkshake\t\t\t\t\t\t5$\t\t\t(14)");
		printf("\n\n\n\n\n\t\t\t\t\tWhen your order is finished just press\"f\"");
		printf("\n\n\nTo return to main page press\"R\"");
		printf("\nTo exit press \"E\"");
		scanf("%i%i%i%i%i%i%i%i%i%c%c",&x3,&x3,&x3,&x3,&x3,&x3,&x3,&x3,&finish);
		switch(x3) {
			if(finish=='f' || finish=='F') {
				return 0;
			case 1:printf("\nYour order is registerd");break;
			case 2:printf("\nYour order is registerd");break;
			case 3:printf("\nYour order is registerd");break;
			case 4:printf("\nYour order is registerd");break;
			case 5:printf("\nYour order is registerd");break;
			case 6:printf("\nYour order is registerd");break;
			case 7:printf("\nYour order is registerd");break;
			case 8:printf("\nYour order is registerd");break;
			case 9:printf("\nYour order is registerd");break;
			case 10:printf("\nYour order is registerd");break;
			case 11:printf("\nYour order is registerd");break;
			case 12:printf("\nYour order is registerd");break;
			case 13:printf("\nYour order is registerd");break;
			case 14:printf("\nYour order is registerd");break; }
			for(i=1;i<=x3;i++){
				printf("\nTotal price is %ld",x3);
			}
			if(finish=='e' || finish=='E') {
				exit(0);
			}
			if(finish=='r' || finish=='R') {
				goto two;
			}
		}
	}
	else if(x1==3) {
		printf("\n1.My feedbacks");
		printf("\n2.Others");
		scanf("%i",&x4);
		if(x4==1) {
			one:
			char word1[20], word2[20], word3[20], word4[20], word5[20], word6[20], word7[20], word8[20], word9[20], word10[20], word11[20], word12[20], word13[20], word14[20], word15[20], word16[20], word17[20], word18[10], word19[20], word20[20];
			scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%d",word1,word2,word3,word4,word5,word6,word7,word8,word9,word10,word11,word12,word13,word14,word15,word16,word17,word18,word19,word20,&return1);
			printf("\n(: Your recommendation is registered, Thank you for your coopration (:\n\"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\"",word1,word2,word3,word4,word5,word6,word7,word8,word9,word10,word11,word12,word13,word14,word15,word16,word17,word18,word19,word20);
		}
		else if(x4==2) {
		printf("\nJulia:The prices are fair and quality is good. (:");
		printf("\n###########################################");
		printf("\n\nDavid:I've came to this restaurant since my childhood and it hasn't been changed since then.I advice you pay it a visit. (:");
		printf("\n#########################################################################################################################");
		printf("\n\nJhon:This restuarant is great but reservation is hard beacause there are too many customers. {:");
		printf("\n#############################################################################################");
		printf("\n\nSusan:One of my freinds told me about this restuarant and i wish i had known it sooner. (:");
		printf("\n########################################################################################");
		printf("\n\nMichale:I don't like this restuarant,who likes a restuarant which serves only pizzas. ):");
		printf("\n\n\nIf you want to leave a comment to press (y)");
		if(opinion2=='y' || opinion2=='Y')
			goto one;
	}
}
	else if(x1==4) {
		exit(0);
	}
	getch();
	return 0;
}
