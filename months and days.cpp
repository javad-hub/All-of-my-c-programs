#include<stdio.h>
#include<conio.h>
int  main() {
    int month, year;
    long int day;
    printf("Enter your age:");
    scanf("%i",&year);
    month=year*12;
    day=year*365;
    printf("\n You have lived %i months until now",month);
    printf("\n You have lived %li days until now",day);
    getch();
    return 0;
}
    
    

