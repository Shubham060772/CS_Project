#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
 typedef struct IPL{
    char matches[12];
    char location[12];
    char date[15];
    double ticketprice;
    int total_seat;
    int seat_sold;
    int empty_seat;
 } IPL;
typedef struct customer
{
    char name[20];
    char gender[2];
    int number;
}customer;

void date_menu(){
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n\n");
    printf("\t\t\t\t\t     DATE MENU");
    printf("\n\n");
     printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    FILE *myFileStream = fopen("ipldatemenu.txt", "r");
    if (myFileStream == NULL) {

        printf("File failed to open\n");

    }
    else{

        int code;
        char match[12],location[12],date[15],time[7];
        while (fscanf(myFileStream, "%d %s %s %s %s", &code, match, location, date, time) == 5) {
        printf("\t\t%4d. %-12s %-12s  %-15s %-7s\n", code, match, location, date, time);
    }

    fclose(myFileStream);

    //     char file_content[1000];
    // while (fgets(file_content, sizeof(file_content), myFileStream) != NULL) {
    //     printf("%s", file_content);
    // }
    // fclose(myFileStream);
    }

    // return 0;
}

void menu(){
    int choice;
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    printf("\t\t\t\t\t     MAIN MENU");
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 ); 
    printf("\n");

    printf("\t\t 1. Select Match according to Date");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 2. Select Match according to Team");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 3. Select Match according to Location");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    system("cls");
    switch (choice)
    {
        case 1: date_menu(); break;
        // case 2: team_menu(); break;
        // case 3: location_menu(); break;
        default: printf("Enter a valid choice !!"); menu();
    }

}
void login(){
    customer person;
    char pass[20];
    char password[20]="CS112PG32";
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 ); 
    printf("\n");
    printf("\t\t\t\t\t     LOGIN PAGE");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n\n");
    printf("\t\t Enter your Phone number : ");
    scanf("%d", &person.number);
    printf("\n");
    printf("\t\t Enter your Password to login : ");
    scanf("%s", pass);
    system("cls");
    menu();
    // if (strcmp(pass,password)!=0)
    // {
    //     printf("Wrong password !!");
    //     login();
    //     // exit(1);
    // }
    // else
    // {
    //     menu();
    // }
    
    
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
