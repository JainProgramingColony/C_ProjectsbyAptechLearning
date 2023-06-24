#include<stdio.h>
#include<conio.h>
int main()
{
    int n,TikNo,TikName,TikAge,TikGen;
    char Name[100],MobileNO[100],UserName[100],Password[100],StrtSta[100],EndSta[100],Jdate[100],TrainNo[100],Pay[100];
    printf("\n       ***** Welcome In Jain's IRCTC Railway Inquiry Department *****");
    printf("\n\nFor Booking Tickets Press 1\n");
    printf("For Tickets Inquiry Press 2");
    printf("\nEnter Your Respone=");
    scanf("%d",&n);
    if(n==1)
    {
    printf("\n --> Enter Your Name= ");
    scanf("%s",&Name);
    printf("\n --> Enter Your Mobile Number= ");
    scanf("%s",&MobileNO);
    printf("\n --> Enter Your UserName= ");
    scanf("%s",&UserName);
    printf("\n --> Enter Your Password= ");
    scanf("%s",&Password);
    printf("\n\nHello %s,Your Account has been LogIn Successfully..........",Name);
    printf("\n\nEnter Starting Station Name= ");
    scanf("%s",&StrtSta);
    printf("\nEnter Ending Station Name= ");
    scanf("%s",&EndSta);
    printf("\nEnter Journey Date= ");
    scanf("%s",&Jdate);
    printf("\n\nHere Are the Trains Between %s & %s........",StrtSta,EndSta);
    printf("\n        1.  Vande Bharat NEW Exp(2598653)    at 05:30");
    printf("\n        2.  Jammu DEEP LUCK Exp(5892653)    at 09:10");
    printf("\n        3.  Golden Temp SUPER Exp(9954756)    at 12:40");
    printf("\n        4.  Higher Kerla Exp(6498653)    at 15:30");
    printf("\n        5.  Virtual Moon Exp(8998553)    at 19:25");
    printf("\n        6.  Delhi India Sun Exp(2752369)    at 23:55");
    printf("\n\nWhich Train do You Wants for your Journey");
    printf("\nEnter The Train Number= ");
    scanf("%s",&TrainNo);
    printf("\nThe Max Tickets Book One Time is 4:");
    printf("\nHow Many Tickets do you wants to Book= ");
    scanf("%d",&TikNo);
    switch (TikNo)
    {
        case 1:
        printf("Enter the Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("Your Ticket Amount is 415");
        printf("\nEnter Your UPI id For Payment= ");
        scanf("%s",&Pay);
        printf("\nYour Ticket has Been Confermed Successfully...........");
        printf("\nYour PNR Number is 2256454854785");
        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
        printf("\nHave a Great Journey");
        break;

        case 2:
        printf("\nEnter the 1st Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 1st Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 1st Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 2nd Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 2nd Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 2nd Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("Your Ticket Amount is 830");
        printf("\nEnter Your UPI id For Payment= ");
        scanf("%s",&Pay);
        printf("\nYour Ticket has Been Confermed Successfully...........");
        printf("\nYour PNR Number is 2256454854785");
        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
        printf("\nHave a Great Journey");
        break;

        case 3:
        printf("\nEnter the 1st Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 1st Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 1st Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 2nd Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 2nd Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 2nd Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 3rd Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 3rd Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 3rd Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("Your Ticket Amount is 1245");
        printf("\nEnter Your UPI id For Payment= ");
        scanf("%s",&Pay);
        printf("\nYour Ticket has Been Confermed Successfully...........");
        printf("\nYour PNR Number is 2256454854785");
        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
        printf("\nHave a Great Journey");
        break;

        case 4:
        printf("\nEnter the 1st Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 1st Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 1st Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 2nd Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 2nd Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 2nd Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 3rd Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 3rd Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 3rd Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("\nEnter the 4th Passenger Name= ");
        scanf("%s",&TikName);
        printf("Enter the 4th Passenger Age= ");
        scanf("%s",&TikAge);
        printf("Enter the 4th Passenger Gender= ");
        scanf("%s",&TikGen);
        printf("Your Ticket Amount is 1660");
        printf("\nEnter Your UPI id For Payment= ");
        scanf("%s",&Pay);
        printf("\nYour Ticket has Been Confermed Successfully...........");
        printf("\nYour PNR Number is 2256454854785");
        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
        printf("\nHave a Great & Beautiful Journey");
        break;
        
    }

    }
    else
    {
    printf("\n\nEnter Starting Station Name= ");
    scanf("%s",&StrtSta);
    printf("\nEnter Ending Station Name= ");
    scanf("%s",&EndSta);
    printf("\nEnter Journey Date= ");
    scanf("%s",&Jdate);
    printf("\n\nHere Are the Trains Between %s & %s........",StrtSta,EndSta);
    printf("\n        1.  Vande Bharat NEW Exp(2598653)    at 05:30   & the Fare is Rs.415");
    printf("\n        2.  Jammu DEEP LUCK Exp(5892653)    at 05:30   & the Fare is Rs.415");
    printf("\n        3.  Golden Temp SUPER Exp(9954756)    at 05:30   & the Fare is Rs.415");
    printf("\n        4.  Higher Kerla Exp(6498653)    at 05:30   & the Fare is Rs.415");
    printf("\n        5.  Virtual Moon Exp(8998553)    at 05:30   & the Fare is Rs.415");
    printf("\n        6.  Delhi India Sun Exp(2752369)    at 05:30   & the Fare is Rs.415");
    }

    return 0;
    
}
