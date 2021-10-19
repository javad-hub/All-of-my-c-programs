#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int  main() {
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
	char color, feedback[60];
	printf("\t\t\t\t\t\t$$$$WHITEMALL$$$$");
	printf("\n\nWelcome to one of the best malls of the country.Please select a choice:");
	two:
	printf("\n\n1.Buy");
	printf("\n2.Feedback");
	printf("\n3.Branches");
	printf("\n4.Contact us");
	printf("\n5.Exit");
	scanf("%d",&x1);

	if(x1==1){
		one:
		printf("\nChoose the section:");
		printf("\n\n1.Clothing");
		printf("\n2.Appliance");
		printf("\n3.Stationary");
		printf("\n4.Accessory");
		printf("\n5.Kids");
		printf("\n6.Furniture");
		printf("\n7.Entertainment");
		printf("\n8.Food");
		scanf("%i",&x2);
		
		if(x2==1){
			printf("\n\n1.Men");
			printf("\n2.Women");
			printf("\n3.Boys");
			printf("\n4.Girls");
			scanf("%i",&x3);
			
			if(x3==1){
				printf("\n\nShirts:\t\t(1)\t\t(2)\t\t(3)\t\t(4)");
				printf("\nColors:\t\tRed\t\tYellow\t\tWhite\t\tBlue");
				printf("\nSize:\t\t15-20\t\t20-30\t\t30-40\t\t40-50");
				printf("\nPrice:\t\t20$\t\t30$\t\t35$\t\t40$");
				printf("\n\nChoose whatever you want(:");
				scanf("%i",&x4);
				
				switch(x4){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
				scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x3==2){
				printf("\n\nGown:\t\t(1)\t\t(2)\t\t(3)\t\t(4)");
				printf("\nColors:\t\tPink\t\tViolet\t\tPurple\t\tMixed(purple,pink)");
				printf("\nSize:\t\t15-25\t\t25-35\t\t35-40\t\t40-45");
				printf("\nPrice:\t\t20$\t\t25$\t\t35$\t\t40$");
				scanf("%i",&x4);
				
				switch(x4){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x3==3){
				printf("\n\nCaps:\t\t(1)\t\t(2)\t\t(3)\t\t(4)");
				printf("\nColors:\t\tGreen\t\tBlack\t\tRed\t\tWhite");
				printf("\nDrawing:\t\tSun\t\tPiegon\t\tEagle\t\tNothing");
				printf("\nPrice:\t\t6$\t\t8$\t\t10$\t\t5$");
				scanf("%i",&x4);
				
				switch(x4){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x3==4){
				printf("\n\nDresses:\t\t(1)\t\t(2)\t\t(3)\t\t(4)");
				printf("\nColors:\t\tPurple\t\tPink\t\tYellow\t\tMixed with drawing");
				printf("\nSize:\t\t10-15\t\t15-20\t\t20-25\t\t25-30");
				printf("\nPrice:\t\t12$\t\t15$\t\t20$\t\t27$");
				scanf("%i",&x4);
				
				switch(x4){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
		}
		
		if(x2==2){
			printf("\n\n1.Fridges");
			printf("\n2.Microwaves");
			printf("\n3.Televisions");
			printf("\n4.Washing machines");
			printf("\n5.Mixer");
			scanf("%i",&x6);
			
			if(x6==1){
				printf("\n\nType:\t\t(1)Simple\t\t(2)Side by side\t\t(3)Every convenience");
				printf("\nColors:White(W)/Black(B)/silver(S)");
				printf("\nPrice:\t\t600$\t\t850$\t\t1000$");
				color=getche();
				toupper(getche());
				scanf("%d",&x7);
				
				switch(x7){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x6==2){
				printf("\n\nType:\t\t(1)\t\t(2)\t\t(3)");
				printf("\nColor:White(W)/Black(B)/Gray(G)");
				printf("\nPrice:\t\t150$\t\t200$\t\t400$");
				color=getche();
				toupper(getche());
				scanf("%d",&x7);
				
				switch(x7){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x6==3){
				printf("\n\nType:\t\t(1)rectangle\t\t(2)round\t\t(3)new age");
				printf("\nInch:\t\t25-40\t\t50-70\t\t20-115");
				printf("\nPrice:\t\t250-340$\t\t450-600$\t\t620-1200$");
				scanf("%d",&x7);
				
				switch(x7){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x6==4){
				printf("\n\nType:\t\t(1)\t\t(2)[more options]");
				printf("\nColor:Black(B)/Silver(S)");
				printf("\nPrice:\t\t450$\t\t600$");
				color=getche();
				toupper(getche());
				scanf("%d",&x7);
				
				switch(x7){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x6==5){
				printf("\n\nSize:\t\t(1)5\t\t(2)15\t\t(3)30");
				printf("\nColors:Green(G)/Red(R)/Black(B)");
				printf("\nPrice:\t\t36$\t\t49$\t\t55$");
				scanf("%d",&x7);
				
				switch(x7){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
				}
					scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
		}
		
		if(x2==3){
			printf("\n\n1.Backpack");
			printf("\n2.Notebook");
			printf("\n3.Pencil case");
			printf("\n4.Writing");
			printf("\n5.Other");
			scanf("%i",&x8);
			
			if(x8==1){
				printf("\n\nSize:\t\t(1)Small\t\t(2)Medium\t\t(3)Large");
				printf("\nDesign:\t\tSuperman\t\tSimple\t\tBrushstroke");
				printf("\nPrice:\t\t40$\t\t50$\t\t66$");
				printf("\nColor:Black/Pink/Blue/Green/Red");
				scanf("%d",&x9);
				
				switch(x9){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
				}
				scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
			}
			
			if(x8==2){
				printf("\n\nSheet:\t\t60\t\t80\t\t100\t\t200");
				printf("\nDesign:\t\tNature\t\tSimple\t\tCartoon\t\tSoccer");
				printf("\nPrice:\t\t20$\t\t37$\t\t44$\t\t51$");
				printf("\nColors:Red(R)/Blue(B)/Yellow(Y)/Pink(P)/Green(G)");
				scanf("%d",&x9);
				
				switch(x9){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
			}
			scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
		}
		
		if(x8==3){
			printf("\n\nsize:\t\t(1)Small\t\t(2)Medium\t\t(3)Large");
			printf("\nDesign:\t\tRainbow\t\tSimple\t\tComet");
			printf("\nPrice:\t\t8$\t\t12$\t\t18$");
			printf("\nColor:Red(R)/Pink(P)/Blue(B)/Orange(O)");
			scanf("%d",&x9);
				
				switch(x9){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
			}
			scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
		}
		
		
		if(x8==4){
			printf("\n\n1.Pen");
			printf("\n2.Pencil");
			printf("\n3.Geometrical");
			printf("\n4.Stencil");
			scanf("%d",&x11);
			
			if(x11==1){
				printf("\n\nColor:\t\t(1)Red\t\t(2)Blue\t\t(3)Black\t\t(4)Green");
				printf("\nBrand:Faber castel(F),Steadler(S)");
					scanf("%d",&x9);
				
				switch(x9){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
			}
			scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
		}
		
		if(x11==2){
			printf("\n\nColor:\t\tBlack(1)\t\tRed(2)");
			printf("\nBrand:Faber castel(F),Steadler(S)");
			scanf("%d",&x9);
				
				switch(x9){
					case 1:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 2:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 3:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					case 4:printf("\nRegistered!");
					printf("\nIf you want anything else press (3) or to Exit press (4)");break;
					color=getche();
				    toupper(getche());
			}
			scanf("%i",&x5);
					if(x5==3)
					goto one;
					else if(x5==4)
					exit(0);
		}
		}
		
			}
			
	}
}
	
	
	
	if(x1==2){
		printf("\n\n1.Your feedback(s)");
		printf("\n2.Others");
		scanf("%d",&x10);
		
		if(x10==2){
			printf("\n\n1.What a big mall!!!!!");
			printf("\n2.You sell everthing!!!!");
			printf("\n3.Sell everything with fair prices, well done.");
			printf("\n4.I just hate it when sometimes your site goes wrong.");
			printf("\n5.Do you have sport clothes?");
			printf("\n(5)Attendant:We'll put it soon(:");
			printf("\n6.How many branches do you have?");
			printf("\n(6)Attendant:Please check our branches choice in the main menu.");
			printf("\n7.I love your mall =)");
			printf("\nTo return to main menu press (3), to Exit press (4)...");
			scanf("%i",&x5);
					if(x5==3)
					goto two;
					else if(x5==4)
					exit(0);
		}
		
		if(x10==1){
			printf("\nPlease type your attitude toward us:");
			gets(feedback);
			printf("\n(: %s (:\nThank you for your coopration");
			printf("\nTo return to main menu press (3), to Exit press (4)...");
			scanf("%i",&x5);
					if(x5==3)
					goto two;
					else if(x5==4)
					exit(0);
		}
	}
	
	
	if(x1==3){
		printf("\n\nBranch 1:Downtown,melvile street, licence 26");
		printf("\nBranch 2:Pilerown reigon,pearl avenue, licence 112");
		printf("\nBranch 3:Whitehall residense,in fornt of foundary");
		printf("\nBranch 4:South washington highway,foxtrot avenue");
		printf("\nTo return to main menu press (3), to Exit press (4)...");
			scanf("%i",&x5);
					if(x5==3)
					goto two;
					else if(x5==4)
					exit(0);
	}
	
	
	
	if(x1==4){
		printf("\n\nIf you want to know more or give feedbacks directly please use these ways:");
		printf("\nPhones:+27 12 807 0963-+264 61 243 603-+1 323-900-8080");
		printf("\nOur e-mai:Whitemall&gmail.com");
		printf("\nTo return to main menu press (3), to Exit press (4)...");
			scanf("%i",&x5);
					if(x5==3)
					goto two;
					else if(x5==4)
					exit(0);
	}
	
	
	if(x1==5)
	exit(0);
	getch();
	return 0;
}
