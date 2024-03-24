#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
 typedef struct IPL{
    char matches[10];
    char location[10];
    char date[15];
    double ticketprice;
    int total_seat;
    int seat_sold;
    int empty_seat;
 } IPL;

void login(){
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 ); 
    printf("\n");
    printf("\t\t\t\t\t     LOGIN PAGE");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\t\t Enter your Username : ");
}
 void welcome(){
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    printf("\t\t\t\t     Welcome To IPL Ticket booking Counter");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    printf("\n");
    printf("\t\t 1.  Login");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 2.  Exit");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t\t\t Enter your Choice :");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        exit(0);
        break;
    default:
        break;
    }

}

int main(){
   welcome();
   return 0;
}
