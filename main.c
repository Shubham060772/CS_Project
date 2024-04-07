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
    char time[7];
 } IPL;
IPL match;
typedef struct customer
{
    char name[20];
    char gender[2];
    int number;
}customer;
customer c1,c2,c3;
char stype[15]; // type of seat selected
int arr[11][11]; // for seatmatrix

void welcome(); //done
void login(); //done
void admin_login();
void menu(); //done
void date_menu(); //done
void team_menu();
void location_menu();
void date_selection(int c);  //done
void location_selection(int c); 
void seat_selection(); //done
void seatmatrix_display(); //done
void payment_gateway();
void print_bill();
void display_snacks();
void snacks_bill();
void customer_details();
void cancel_ticket();
void order_history();
void end_page();



int main(){
   welcome();
   return 0;
}

void creating_seatmarix(){

        for (int i = 0; i < 11; i++)
            {
                for (int j = 0; j < 11; j++)
                {
                    arr[i][j]=0;
                }
            }
}

void seatmatrix_display(){
        int choice;
        printf("1. Pavilion \n 2.Right half \n 3. Left half");
        printf("\n Enter Your Choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:

            strcpy(stype, "Pavilion");
            for (int i = 0; i < 11; i++)
            {
                
                for (int j = 0; j < 11; j++)
                {
                    if(j==0 && i!=10) printf(" %d| ",i);
                    else if(i==10 && j!=0) printf(" %d ",j);
                    else if(arr[i][j]==0) printf(" _ ");
                    else printf(" X ");
                }
                printf("\n");
            }
            seat_selection();
            break;
        case 2:
            strcpy(stype, "Right half");
            for (int i = 0; i < 11; i++)
            {
                
                for (int j = 0; j < 11; j++)
                {
                    if(j==0 && i!=10) printf(" %d| ",i);
                    else if(i==10 && j!=0) printf(" %d ",j);
                    else if(arr[i][j]==0) printf(" _ ");
                    else printf(" X ");
                }
                printf("\n");
            }
            seat_selection();
            break;
        case 3:
            strcpy(stype, "Left half");
            for (int i = 0; i < 11; i++)
            {
                
                for (int j = 0; j < 11; j++)
                {
                    if(j==0 && i!=10) printf(" %d| ",i);
                    else if(i==10 && j!=0) printf(" %d ",j);
                    else if(arr[i][j]==0) printf(" _ ");
                    else printf(" X ");
                }
                printf("\n");
            }
            seat_selection();
            break;
        
        default:
            printf("Wrong choice");
            seatmatrix_display();
            break;
        }
}

void seat_selection(){
    int row,col,tickets;
    printf("Nmber of tickets = ");
    scanf("%d",&tickets);
    
    while(tickets>10 || tickets<=0){
        printf("Invalid number\nPlease enter a number between 1 and 10:\n");
        printf("Number of tickets = ");
    }
    while (tickets--){
    printf("Enter row and column respectively :");
    scanf("%d %d", &row, &col);
    if (arr[row][col - 1] == 1)
    {
        printf("Seat is booked , select another seat\n");
        tickets++;
    }
    else
    {
        arr[row][col] = 1;
        printf("Seat selected successfully\n");
    }
    for (int i = 0; i < 11; i++)
            {
                
                for (int j = 0; j < 11; j++)
                {
                    if(j==0 && i!=10) printf(" %d| ",i);
                    else if(i==10 && j!=0) printf(" %d ",j);
                    else if(arr[i][j]==0) printf(" _ ");
                    else printf(" X ");
                }
                printf("\n");
            }
}
printf("Do you want to book nore tickets? (Y/N)  \n");
char a[2];
scanf("%s",a);
if(a[0] =='y'||a[0] =='Y'){
    system("cls");
    seatmatrix_display();
    }else{
    return ;
    }
}

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
        while (fscanf(myFileStream, "%d %s %s %s %s", &code, match, location, date, time) == 5){
            printf("\t\t%4d. %-12s %-12s  %-15s %-7s\n", code, match, location, date, time);
        }
    fclose(myFileStream);
    // seatmatrix_display();
    int choice;
    printf("\nEnter the number of your preferred");
    scanf("%d",&choice);
    system("cls");
    date_selection(choice);

    }
}

void team_menu(){
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n\n");
    printf("\t\t\t\t\t     TEAM MENU");
    printf("\n\n");
     printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    FILE *myFileStream = fopen("iplteammenu.txt", "r");
    if (myFileStream == NULL) {

        printf("File failed to open\n");

    }
    else{

        // int code;
        char code[2],team[20];
        while (fscanf(myFileStream, "%s %s",code , team) == 2){
            printf("\t\t%4s. %-12s\n", code, team);
        }
    fclose(myFileStream);   
    printf("\n\n");
    }
    int choice;
    printf("\t\tEnter Code of Your  Team: ");
    scanf("%s",&choice);
    system("cls");
    switch (choice)
    {
    case 1:
        break;
    
    default:
        break;
    }
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
        case 2: team_menu(); break;
        case 3: location_menu(); break;
        default: printf("Enter a valid choice !!"); menu();
    }

}
void login(){
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
    scanf("%d", &c1.number);
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
    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n");

    printf("\t\t\t\t     Welcome To IPL Ticket booking Counter");printf("\n");printf("\t\t");

    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n\n");

    printf("\t\t 1.Customer Login");printf("\n");printf("\t\t");

    for(int i=0;i<77;i++) printf("_" );printf("\n\n");

    printf("\t\t 2. Admin Login");printf("\n");printf("\t\t");

    for(int i=0;i<77;i++) printf("_" );printf("\n\n"); 
    printf("\t\t 3.  Exit");printf("\n");printf("\t\t");

    for(int i=0;i<77;i++) printf("_" );printf("\n\n");

    printf("\t\t\t\t Enter your Choice :");
    
    int choice;
    scanf("%d",&choice);
    system("cls");
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        // admin_login();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Enter a Valid Choice \n");
        welcome();
        break;
    }

}

void date_selection(int c){
    FILE *myFileStream = fopen("ipldatemenu.txt", "r");
    if (myFileStream == NULL) {

        printf("File failed to open\n");

    }
    else
    {
        int code;
        // char match[12], location[12], date[15], time[7];
        while (fscanf(myFileStream, "%d %s %s %s %s", &code, &match.matches, &match.location, &match.date, &match.time) == 5)
        {
            if (c==code){
                // return show_match_details(c);
            printf("\t\t%4d. %-12s %-12s  %-15s %-7s\n", code, match.matches, match.location, match.date,  match.time);
            printf("\nOpening windows for the selected match\n");
            system("pause");
            system("cls");
            creating_seatmarix();
            seatmatrix_display();
            }
        }
                printf("\n\n No Match Found \n Please Try Again !!! \n");
                // getch();
                date_menu();
        }
    fclose(myFileStream);
    }

    void location_menu(){
        system("cls");
        printf("\t Location Menu \n");
        FILE *myfilestream = fopen("ipllocationmenu.txt","r");
        int code;
        while (fscanf(myfilestream,"%d %s", &code, match.location )==2)
        {
            printf("%4d. %-12s\n", code , match.location);
        }
    fclose(myfilestream);
    int choice;
    printf("\nEnter the number of your preferred");
    scanf("%d",&choice);
    system("cls");
    location_selection(choice);
    }

void location_selection(int c){
    FILE* myfile=fopen("ipllocationmenu.txt","r");
    if (myfile == NULL) {

        printf("File failed to open\n");

    }
    else
    {
        int code;
        int flag = 1;
        char  location[12];
        while (fscanf(myfile, "%d %s ", &code, location) == 2)
        {
            if (c==code){
                flag = 0;
                FILE *myFileStream= fopen("ipldatemenu.txt","r");
                while (fscanf(myFileStream, "%d %s %s %s %s", &code, match.matches, match.location, match.date, match.time) == 5)
                {
                    if(strcmp(location,match.location)==0) printf("\t\t%4d. %-12s %-12s  %-15s %-7s\n", code, match.matches, match.location, match.date, match.time);
                }
            }
        }
        if (flag)
        {
            printf("\n\n No Match Found \n Please Try Again !!! \n");
            // getch();
            location_menu();
        }
    }
}