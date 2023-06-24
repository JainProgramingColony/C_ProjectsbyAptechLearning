#include <stdio.h>
#include <conio.h>
int main()
{
    int n, TikNo;
    long PPP;
    char Name[100], MobileNO[100], Email[100], StrtSta[100], EndSta[100], Jdate[100], TrainNo[100], Pay[100], UPay[100];
    printf("\n       ***** Welcome In Jain's Bus Inquiry Department *****");
    printf("\n\n --> Enter Your Name= ");
    scanf("%s", &Name);
    printf("\n --> Enter Your Mobile Number= ");
    scanf("%s", &MobileNO);
    printf("\n --> Enter Your Email id= ");
    scanf("%s", &Email);
    printf("\n\nEnter Starting Station Name= ");
    scanf("%s", &StrtSta);
    printf("\nEnter Ending Station Name= ");
    scanf("%s", &EndSta);
    printf("\nEnter Journey Date= ");
    scanf("%s", &Jdate);
    printf("\n\nHere Are the Buses Between %s & %s........", StrtSta, EndSta);
    printf("\n        1.  Vande Bharat NEW Exp(2598653)    at 05:30");
    printf("\n        2.  Jammu DEEP LUCK Exp(5892653)    at 09:10");
    printf("\n        3.  Golden Temp SUPER Exp(9954756)    at 12:40");
    printf("\n        4.  Higher Kerla Exp(6498653)    at 15:30");
    printf("\n        5.  Virtual Moon Exp(8998553)    at 19:25");
    printf("\n        6.  Delhi India Sun Exp(2752369)    at 23:55");
    printf("\n\nWhich Bus do You Wants for your Journey");
    printf("\nEnter The BUS Number= ");
    scanf("%s", &TrainNo);
    printf("\nThe Max Tickets Book One Time is 100:");
    printf("\nHow Many Tickets do you wants to Book= ");
    scanf("%d", &TikNo);
    if (TikNo <= 100)
    {
        PPP = (500 * TikNo);
        printf("Your Ticket Amount is %ld", PPP);
        printf("\nEnter Your UPI id For Payment= ");
        scanf("%s", &Pay);
        printf("\nEnter Your UPI PIN For Payment= ");
        scanf("%s", &UPay);
        printf("\nYour Ticket has Been Confermed Successfully...........");
        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Mobile No.");
        printf("\nThanks For Your Choosing Jain's Bus Inquiry Department");
        printf("\nHave a Great Journey");
    }
    else
    {
        printf("Soory.... You Enter Max Seats for booking");
    }
}