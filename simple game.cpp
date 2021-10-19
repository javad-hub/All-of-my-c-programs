#include<stdio.h>
#include<conio.h>
#include<math.h>
int func(int x);

int  main() {
	int n, i, answer = 23;
	char play;
	printf("I'm gussing a number what is it?");
	one:
	for(i=0; i<=5; i++){
		scanf("%d",&n);
		if (n == answer){
			printf("\nYou won! Do you want to play again?(y/n)");
			scanf("%c",&play);
			if(play == 'y'){
				func(answer);
			}
			else if(play == 'n')
			break;
		}
		else{
			printf("Wrong! Guess again:\n");
			if(i == 5){
				printf("\nYou are out of chances! The answer was %d!",answer);
				break;
			}
			else
			continue;
		}
	}
	getch();
	return 0;
}

int func(int x){
	int answer;
	answer = pow(answer,2);
	return answer;
}
