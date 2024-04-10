    }
    // print_bill();
}
void print_bill(){
    printf("\t\t\t Bill");
    printf("\t\t\n");
    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n");
    printf("\t\tName-       %s ", c1.name);
    // printf("\nMatch ID      %d", match.id);
    printf("\n\t\tTeam-       %s",match.matches);
    printf("\n\t\tDate\t-   %s", match.date);
    printf("\n\t\tTime\t-   %s", match.time);
    printf("\n\t\tVenue-      %s", match.location);
    
    printf("\n\t\tSeat Details:");
    for(int i =0;i<n;i++){ // printing the seat numbers
        printf(" %d-%d, ", sb.row[i],sb.col[i]);
    }
    printf("\n\t\tTicket Price:  Rs.%.2f", match.ticketprice);
    printf("\n\t\tService Tax:  18%% [Rs.%.2f]", match.ticketprice * 18 / 100.0);
    printf("\n\t\tTotal:        Rs.%.2f", match.ticketprice+match.ticketprice * 18 / 100.0);
      printf("\t\t\n");
    for(int i=0;i<77;i++) printf("%c", 205 );printf("\n");
    // printf("\n\t\tPayment Mode:  ");
    // if(upi_paymemt == true) printf("UPI Payment");
    //  if(netbanking == true) printf("Net Banking/ E-Wallet");
    // else if(debitcard == true) printf("Debit Card");
    printf("\t\t\tThank You!\n\n\n");
    // printf("\n For any Query Contact Us at shubham_ai44@iitp.ac.in");
    // printf("\n\n www.cricketcouncilofindia.org \n www.iccworldcup.com");
    // printf("\n\n Developed by : Shubham Agrawal (CS112PG32)");
    // getch();
    system("pause");
    system("cls");
    save_details();
    printf("What to Order Snacks ? (Y/N)");