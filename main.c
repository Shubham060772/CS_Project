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
    double price;
 } IPL;
IPL match;
typedef struct customer
{
    char name[20];
    char gender[2];
    int number;
}customer;
customer c1,c2,c3;
int customerid=0;
char stype[15]; // type of seat selected
int arr[11][11]; // for seatmatrix
typedef struct seat_booked{
    int row[11];
    int col[11];
} seat_booked;
seat_booked sb; // store the seat selected for booking
int n=0;

void welcome(); //done
void login(); //done
void admin_login(); //done
void admin_menu(); //done
void sub_menu(); //done
void menu(); // done
void date_menu(); //done
void team_menu(); //
void location_menu();
void date_selection(int c);  //done
void location_selection(int c);
void creating_seatmarix(); 
void seat_selection(); //done
void seatmatrix_display(); //done
void payment_gateway();  //done
void netbanking(double amount);  //done
void creditcard(double amount);    //done
void debitcard(double amount);    //done
void upi_paymemt(double amount); //done
void print_bill();    //done
void display_snacks(); // done by ayush
void snacks_bill(); // done by
void save_details();    //done
void customer_details();
void cancel_ticket();
void order_history();
void contactus();
void aboutus();
void end_page();    //done by sahil;




int main(){
   welcome();
   return 0;
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
        admin_login();
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
void admin_login(){
    char pass[20];
    char id[9];
    char userid[9]="2301AI44";
    char password[20]="CS112PG32";
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 ); 
    printf("\n");
    printf("\t\t\t\t\t   ADMIN LOGIN PAGE");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n\n");
    printf("\t\t Enter Admin ID  : ");
    scanf("%s", id);
    printf("\n");
    printf("\t\t Enter Password to login : ");
    scanf("%s", pass);
    system("cls");
    // menu();
    
    if (strcmp(pass,password)!=0 || strcmp(userid,id)!=0)
    {
        printf("Wrong ID or password !!");
        admin_login();
        // exit(1);
    }
    else
    {
        // admin_menu();
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

    printf("\t\t 1. Book Tickets");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 2. Cancel Tickets");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 3. View order history");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 4.Exit");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    system("cls");
    switch (choice)
    {
        case 1: sub_menu(); break;
        case 2: cancel_ticket(); break;
        // case 3: order_history(); break;
        case 4: exit(0); break;
        default: printf("Enter a valid choice !!"); menu();
    }
}
void admin_menu(){
    int choice;
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    printf("\t\t\t\t\t     ADMIN MENU");
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 ); 
    printf("\n");

    printf("\t\t 1. EDIT MATCHES");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 2. ADD MATCHES ");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 3. DELETE MATCHES");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("\n\n");
    printf("\t\t 4. EXIT");
    printf("\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("_" );
    printf("Enter your choice : ");
    scanf("%d",&choice);
    system("cls");
    switch (choice)
    {
        // case 1: sub_menu(); break;
        // case 2: cancel_ticket(); break;
        // case 3: order_history(); break;
        case 4: exit(0); break;
        default: printf("Enter a valid choice !!"); menu();
    }
}
void sub_menu(){
    int choice;
    printf("\n\n");
    printf("\t\t");
    for(int i=0;i<77;i++) printf("%c", 205 );
    printf("\n");
    printf("\t\t\t\t\t     SELECTION MENU");
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
        default: printf("Enter a valid choice !!"); sub_menu();
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
void date_selection(int c){
    FILE *myFileStream = fopen("ipldatemenu.txt", "r");
    if (myFileStream == NULL) {

        printf("File failed to open\n");

    }
    else
    {
        int code,count=0;
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
            count++;
            }
        }
        if (count == 0)
        {
            printf("\n\n No Match Found \n Please Try Again !!! \n");
            // getch();
            date_menu();
        }
        }
    fclose(myFileStream);
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
            match.price=1500;
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
            match.price=1000;
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
            match.price=1000;
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
void seat_selection()
{
    int row, col, tickets;
    printf("Nmber of tickets = ");
    scanf("%d", &tickets);
    n=0;
    match.ticketprice=tickets*(match.price);
    

    while (tickets > 10 || tickets <= 0)
    {
        printf("Invalid number\nPlease enter a number between 1 and 10:\n");
        printf("Number of tickets = ");
    }
    while (tickets--)
    {
        printf("Enter row and column respectively :");
        scanf("%d %d", &row, &col);

        if (arr[row][col] == 1)
        {
            printf("Seat is booked , select another seat\n");
            tickets++;
        }
        else
        {
            arr[row][col] = 1;
            printf("Seat selected successfully\n");
            sb.row[n]=row;
            sb.col[n]=col;
            n++;

        }
        for (int i = 0; i < 11; i++)
        {

            for (int j = 0; j < 11; j++)
            {
                if (j == 0 && i != 10)
                    printf(" %d| ", i);
                else if (i == 10 && j != 0)
                    printf(" %d ", j);
                else if (arr[i][j] == 0)
                    printf(" _ ");
                else
                    printf(" X ");
            }
            printf("\n");
        }
    }
    printf("Do you want to book nore tickets? (Y/N)  \n");
    char a[2];
    scanf("%s", a);
    if (a[0] == 'y' || a[0] == 'Y')
    {
        system("cls");
        seatmatrix_display();

    }
    else
    {
        char p='%';
        printf("Total Amount : Rs. %f + 18 %c GST\n",match.ticketprice,p);
        // print_bill();
        system("pause");
        payment_gateway();
    }
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
                    break;
                }
                seatmatrix_display();
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
void payment_gateway(){
    system("cls");
    printf("Enter Your Name :");
    scanf("%s",c1.name);
    int choice;
    double amount=(match.ticketprice+match.ticketprice*18/100.0);
    printf("\n\n Amount to be  paid is Rs. %.2f \n",amount);
    printf("\n\n Select Payment Method: ");
    printf("\n 1. UPI Payment \n 2. Net Banking/E-Wallet \n 3. Debit Card \n 4. Credit Card\n");
    printf("Enter Your  Choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        upi_payment(amount);
        break;
    case 2:
        netbanking(amount);
        break;
    case 3:
        debitcard(amount);
        break;
    case 4:
        // creditcard(amount);
        break;
    default:
        break;
    }
    // print_bill();
}
void print_bill(){
    printf("\t\t\t Bill");
    printf("\t\t\n");
    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n");
    printf("\t\tName-       %s ", c1.name);
    // printf("\nMatch ID      %d;;", match.id);;
    printf("\n\t\tTeam-       %s",match.matches);
    printf("\n\t\tDate\t-   %s", match.date);
    printf("\n\t\tTime\t-   %s", match.time);
    printf("\n\t\tVenue-      %s", match.location);
    
    printf("\n\t\tSeat Details:");
    for(int i =0;i<n;i++){ // printing the seat numbers;
        printf(" %d-%d, ", sb.row[i],sb.col[i]);
    }
    printf("\n\t\tTicket Price:  Rs.%.2f", match.ticketprice);
    printf("\n\t\tService Tax:  18%% [Rs.%.2f]", match.ticketprice * 18 / 100.0);
    printf("\n\t\tTotal:        Rs.%.2f", match.ticketprice+match.ticketprice * 18 / 100.0);
      printf("\t\t\n");
    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n");
    // printf("\n\t\tPayment Mode:  ");
    // if(upi_paymemt == true); printf("UPI Payment");;
    //  if(netbanking == true); printf("Net Banking/ E-Wallet");;
    // else if(debitcard == true); printf("Debit Card");;
    printf("\t\t\tThank You!\n\n\n");
    // printf("\n For any Query Contact Us at shubham_ai44@iitp.ac.in");;
    // printf("\n\n www.cricketcouncilofindia.org ;;\n www.iccworldcup;;.com");;
    // printf("\n\n Developed by ; Shubham Agrawal (CS112PG32)");;
    // getch();
    system("pause");
    system("cls");
    save_details();
    printf("What to Order Snacks ? (Y/N)");
    char choice[2];
    scanf(" %s", &choice);
    if(choice[0]=='y'||choice[0]=='Y'){
        // display_snacks();
    }else{
        
    end_page();
    }
}
void save_details(){
    customerid++;
    FILE *myFileStream= fopen("customerdetails.txt","a+");
    int check;
    char s[15];
    int n,count=0;
    while(fscanf(myFileStream,"%d %s %s",&check,s,&n)==3){
        count++;
    }
    if(customerid<check)customerid=check+1;
    fprintf(myFileStream,"%d %s %d \n",customerid,c1.name,c1.number);
    FILE *fp=fopen("orderhistory.txt","a");
    fprintf(fp,"%d %s %s %s \n",customerid,match.matches,match.date,match.location);
    fclose(myFileStream);
    fclose(fp);
}

void upi_payment(double  amount){
    char vcode[6];
    char vpa[15];
    int c;
    printf("Enter VPA ID : ");
    scanf("%s",vpa);
    printf("\n Enter Verification Code : ");
    scanf("%s",vcode);
    printf("\n Payment Succesfull \n");
    print_bill();
}

void netbanking(double amount){
    char  accno[20] ;
    printf("\n Net Banking Payment\n");
    printf("Account Number : ");
    scanf("%s",accno);
    printf("\n Transaction Id :  3789654321\n");
    printf("\n Payment Successful.\n");
    print_bill();
}

void debitcard(double amount) {
    char nameOnCard[30];
    long cardNumber;
    char expiryDate[5];
    printf("\n Debit Card Payment\n");
    printf("Name On The Card : ");
    gets(nameOnCard);
    printf("Card Number : ");
    scanf("%ld",&cardNumber);
    printf("Expiry Date (MM/YY) : ");
    scanf("%s",expiryDate);
    if ((strlen(expiryDate) != 4) ) {
        printf("\n Invalid Expiry Date Format! Please enter in format MM/YY.");
        debitcard(amount);
    } else{
        printf("\n Payment Successful.\n");
        print_bill();
    }
}

void creditcard(double amount){
    char nameOnCard[30];
    long cardNumber;
    char expiryDate[5];
    printf("\n Credit Card Payment\n");
    printf("Name On The Card : ");
    gets(nameOnCard);
    printf("Card Number : ");
    scanf("%ld",&cardNumber);
    printf("Expiry Date (MM/YY) : ");
    scanf("%s",expiryDate);
    if ((strlen(expiryDate) != 4) ) {
        printf("\n Invalid Expiry Date Format! Please enter in format MM/YY.");
        creditcard(amount);
    } else{
        printf("\n Payment Successful.\n");
        print_bill();
    }
}

// Function to display the list of snacks with their prices
void display_snacks() {
    int *choices = malloc(100 * sizeof(int));
    int *quantities = malloc(100 * sizeof(int));
    if (choices == NULL || quantities == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    int num_items = 0;
    char buyMore;

    printf("Snacks Menu:\n");
    printf("1. Chips            - Rs. 20\n");
    printf("2. Chocolate Bar    - Rs. 30\n");
    printf("3. Popcorn          - Rs. 25\n");
    printf("4. Soda             - Rs. 15\n");
    printf("5. Sandwich         - Rs. 50\n");
    printf("6. Samosa           - Rs. 10\n");
    printf("7. Ice Cream        - Rs. 35\n");
    printf("8. Pizza Slice      - Rs. 40\n");
    printf("9. Burger           - Rs. 45\n");
    printf("10. French Fries    - Rs. 25\n");

    do {
        // select a snack and quantity
        int choice, quantity;
        printf("\nSelect the Snack to buy:  ");
        while (scanf("%d", &choice) != 1 || choice < 1 || choice > 10) {
            printf("Invalid input.");
            while(getchar() != '\n'); // Clear input 
        }

        printf("Enter the quantity: ");
        while (scanf("%d", &quantity) != 1 || quantity < 1) {
            printf("Invalid input. ");
            while(getchar() != '\n'); // Clear input 
        }

        // Storing user choices
        choices[num_items] = choice;
        quantities[num_items] = quantity;
        num_items++;

        // Buy more snacks or not
        printf("Do you want to buy more snacks? (y/n): ");
        while (scanf(" %c", &buyMore) != 1 || (buyMore != 'y' && buyMore != 'Y' && buyMore != 'n' && buyMore != 'N')) {
            printf("Invalid input. Please enter 'y' for Yes or 'n' for No: ");
            while(getchar() != '\n'); // Clear input
        }
    } while(buyMore == 'y' || buyMore == 'Y');

    // Displaying the bill
    display_bill(choices, quantities, num_items);

    // Free dynamically allocated memory
    free(choices);
    free(quantities);
}

// Function to calculate and display the bill
void display_bill(int choices[], int quantities[], int num_items) {
    float total = 0;
    printf("\nYour Bill:\n");
    printf("Snack        Quantity      Price\n");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < num_items; i++) {
        float price;
        switch(choices[i]) {
            case 1: price = 20.0; printf("Chips             "); break;
            case 2: price = 30.0; printf("Chocolate Bar     "); break;
            case 3: price = 25.0; printf("Popcorn           "); break;
            case 4: price = 15.0; printf("Soda              "); break;
            case 5: price = 50.0; printf("Sandwich          "); break;
            case 6: price = 10.0; printf("Samosa            "); break;
            case 7: price = 35.0; printf("Ice Cream         "); break;
            case 8: price = 40.0; printf("Pizza Slice       "); break;
            case 9: price = 45.0; printf("Burger            "); break;
            case 10: price = 25.0; printf("French Fries      "); break;
        }
        printf("          %d           Rs. %.2f\n", quantities[i], price * quantities[i]);
        total += price * quantities[i];
    }
    printf("-------------------------------------------------------\n");
    printf("Total:                                  Rs. %.2f\n", total);
}


void end_page (){


    printf("\t\t");
    for (int i = 0; i < 77; i++)
        printf("%c", 205);
    printf("\n");

    printf("\t\t\t\t     Thank you for trusting our services");
    printf("\n");
    printf("\t\t");
    

    for (int i = 0; i < 77; i++)
        printf("%c", 205);
    printf("\n\n");

    printf("\t\t 1.Book Again");
    printf("\n");
    printf("\t\t");

    for (int i = 0; i < 77; i++)
        printf("_");
    printf("\n\n");

    printf("\t\t 2.Print Again");
    printf("\n");
    printf("\t\t");

    for (int i = 0; i < 77; i++)
        printf("_");
    printf("\n\n");

     printf("\t\t 3.Exit");
    printf("\n");
    printf("\t\t");

    for (int i = 0; i < 77; i++)
        printf("_");
    printf("\n\n");

    printf("\t\t\t\t Enter your Choice :");

    int choice;
    scanf("%d", &choice);
    system("cls");
    // system("clear");

    switch (choice)
    {
    case 1:
        welcome();
        break;
    case 2:
        print_bill();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Enter a Valid Choice \n");
        end_page();
        break;
    }
}

void order_history(){

    printf("**********ORDER HISTORY*********\n");
    FILE *fp = fopen("orderhistory.txt","r");
    while(fscanf(fp,"%d %s %s %s \n",&customerid,match.matches,match.date,match.location)==4){
        printf("%d  %s %s %s \n",customerid,match.matches,match.date,match.location);
        // printf("+");
    }
    fclose (fp);
}

void cancel_ticket(){
    order_history();
    int id;
    printf("\n\nEnter the ID of the ticket");
    scanf("%d",&id);
    FILE *fp = fopen("orderhistory.txt","r");
    FILE*fp2=fopen("temp.txt","a");
    char line[100];
    int tempid;
    while(fscanf(fp,"%d %s %s %s \n",&customerid,match.matches,match.date,match.location)==4){
        if(id!=customerid){
            fprintf(fp2,"%d %s %s %s \n",customerid,match.matches,match.date,match.location);
        }
        else printf("Following Order is Removed : \n \t\t %d %s %s %s \n",customerid,match.matches,match.date,match.location);
        // printf("+");
    }
    fclose (fp);
    fclose (fp2);
    remove("orderhistory.txt");
    rename("temp.txt","orderhistory.txt");
    printf("\n\n Order is Cancelled Succesfully !!");
    printf("\nAmount will be to credited to your Account in 7 working Days\n\n");
    order_history();
}