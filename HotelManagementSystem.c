#include <stdio.h>
#include <conio.h>
int main()
{
    int Time;
    long Amount;
    char HtlName[100], AadharNO[100], Name[100], Phone[100], Email[100], Address[100], Nation[100], Date[100], UPI[100], UPIpin[100];
    system("cls");
    printf("                    ****** Jain's Hotel Management System ******");
    printf("\n\nEnter Customer Details.......");
    printf("\n\n --> Enter the Hotel Name= ");
    scanf("%s", HtlName);
    printf("\n --> Enter your 16 Digit Aadhar Number= ");
    scanf("%s", &AadharNO);
    printf("\n --> Enter your Name= ");
    scanf("%s", &Name);
    printf("\n --> Enter your Mobile Number= ");
    scanf("%s", &Phone);
    printf("\n --> Enter your E-mail id= ");
    scanf("%s", &Email);
    printf("\n --> Enter your Nationality= ");
    scanf("%s", &Nation);
    printf("\n --> Enter your Address= ");
    scanf("%s", &Address);
    printf("\n --> Enter Time Period in days= ");
    scanf("%d", &Time);
    printf("\n --> Enter your Arrival Date(dd/mm/yy)= ");
    scanf("%s", &Date);
    Amount = (Time * 1500);
    printf("\n --> Your Amount is %ld", Amount);
    printf("\n\n --> Enter your UPI id= ");
    scanf("%s", UPI);
    printf("\n --> Enter your UPI Pin= ");
    scanf("%s", UPIpin);
    printf("\nPress Enter for Continue........");
    getch();
    system("cls");
    printf("\nYour room is Successfully Booked..........");
    printf("\n\nHere are Your Room Details......");
    printf("\n              * Hotel Name= %s", HtlName);
    printf("\n              * Customer's Name= %s", Name);
    printf("\n              * Customer's Phone No.= %s", Phone);
    printf("\n              * Customer's E-mail id= %s", Email);
    printf("\n              * Customer's Address= %s", Address);
    printf("\n              * Customer's Arrival Date= %s",Date);
    printf("\n              * Room time Period= %s", Time);
    printf("\n              * Hotel Room No.= 78A 65748");
    printf("\n              * Room Key Passcode= @admin.123");
    printf("\n              * Payment Successfully Done.....");
    return 0;
}