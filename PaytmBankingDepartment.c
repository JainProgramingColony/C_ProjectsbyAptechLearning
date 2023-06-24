#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n, z, y, a, TikNo, TikName, TikAge, TikGen;
    char AadharNO[100], Name[100], FName[100], Phone[100], Email[100], DOB[100], PanNO[100], bnk[100], ifsc[100], Ac[100], ac[] = "64876162546", Pass[100], pass[] = "@hdfc.123", OTP[100];
    char AcName[100], AcNum[100], PayRs[100], Num[100], RecRs[100], BilName[100], StaName[100], AppNum[100], StrtSta[100], EndSta[100], Jdate[100], TrainNo[100], Pay[100];
    printf("\n\n             ***** Welcome to Jain's Paytm Department *****");
    printf("\n* Press 1 for New User");
    printf("\n* Press 2 for Exist User");
    printf("\n  Enter your Responce= ");
    scanf("%d", &n);
    switch (n)
    {
    ////////// Here Case 1 are Start......///////////
    case 1:
        MN:
        printf("\n --> Enter your 16 Digit Aadhar Number= ");
        scanf("%s", &AadharNO);
        printf("\n\n --> Enter your Name= ");
        scanf("%s", &Name);
        printf("\n --> Enter your Father Name= ");
        scanf("%s", &FName);
        printf("\n --> Enter your Mobile Number= ");
        scanf("%s", &Phone);
        printf("\n --> Enter your E-mail id= ");
        scanf("%s", &Email);
        printf("\n --> Enter your Date of Birth= ");
        scanf("%s", &DOB);
        printf("\n --> Emter your PAN No.=");
        scanf("%s", &PanNO);
        printf("\n --> Enter Your Bank Name= ");
        scanf("%s", &bnk);
        printf("\n --> Enter Bank IFSC Code= ");
        scanf("%s", &ifsc);
        printf("\n --> Enter Account Number= ");
        scanf("%s", &Ac);
        printf("\n --> Enter the OTP= ");
        scanf("%s", &OTP);
        printf("\n\nThe Minimum Amount for Open Your New Paytm Account is Rs.500");
        printf("\nEnter the amount that you want to deposit in your account= ");
        scanf("%d", &z);
        if (z >= 500)
        {
            printf("\n\n                  ** Thanks For joining Paytm **\n");
            printf("\n\nHere are Your Details......");
            printf("\n              * Name= %s", Name);
            printf("\n              * Phone No.= %s", Phone);
            printf("\n              * E-mail id= %s", Email);
            printf("\n              * Paytm UPI id= %s@paytm", Phone);
            printf("\n              * Paytm UPI Wallet Balance= %d", z);
            printf("\n              * Paytm Account No.= 64876162546");
            printf("\n              * Account Password= @hdfc.123");
            printf("\n              * UPI PIN= 020202");
            printf("\n\n\n Dear %s", Name);
            printf("\n          We are very excited and happy to get the opportunity to serve you as one of our respectable customer. We really thank you for choosing us. We can assure you that our all workers are very responsible and committed towards our customers. We also are confident about our good quality service.\n");
            printf("Our Customer Care Number is 1800 XXXX XXXX");
        }
        else
        {
            printf("\nDear %s, You Enter less than Min Amount. Because,The Min Amount is Rs.500, PLease  fill the form again\n", Name);
            printf("If you need some Help, You can Call on our Costumer Care Number\n");
            printf("Our Customer Care Number is 1800 XXXX XXXX");
            printf("\n\nFor Fill the from Strating Press 1");
            printf("\nFor Exit Press 0");
            printf("\nEnter your Responce: ");
            scanf("%d", &y);
            if (y == 1)
            {
                goto MN;
            }
            else
            {
                printf("Exit");
            }
        }
        break;
    /////////// Here Case 1 are Finish Successfully......///////////

    ////////// Here Case 2 are Start......///////////
    case 2:
        printf("\n                        ** Welcome again in Paytm **");
        printf("\nLogin Your Paytm Account.......");
        NM:
        printf("\n\n --> Enter your Name= ");
        scanf("%s", &Name);
        printf("\n --> Enter your Mobile Number= ");
        scanf("%s", &Phone);
        printf("\n --> Enter your E-mail id= ");
        scanf("%s", &Email);
        printf("\n --> Enter the OTP= ");
        scanf("%s", &OTP);
        printf("\n --> Enter Your Paytm Account Number= ");
        scanf("%s", &Ac);
        if (strcmp(Ac, ac) == 0)
        {
            NMA:
            printf("\n -->Enter your Paytm Account Password=");
            scanf("%s", &Pass);
            if (strcmp(Pass, pass) == 0)
            {
                printf("\n\n\nWelcome %s", Name);
                printf("\n     * Press 1 for Money Transfer... \n");
                printf("     * Press 2 for Mobile Recharge... \n");
                printf("     * Press 3 for Pay Your Bill Payments... \n");
                printf("     * Press 4 for Book Tickets... \n");
                printf("     * Press 5 for Your Loan Payment... \n");
                printf("       Enter your Responce= ");
                scanf("%d", &a);
                switch (a)
                {
                ////////// Here Case 2(1) are Start......///////////
                case 1:
                    printf("\n\nEnter Receiver's Bank A/c details.......");
                    printf("\n\n --> Enter Receiver's Bank= ");
                    scanf("%s", &bnk);
                    printf("\n --> Enter IFSC Code= ");
                    scanf("%s", &ifsc);
                    printf("\n --> Enter Account Holder's Name= ");
                    scanf("%s", &AcName);
                    printf("\n --> Enter Account Number= ");
                    scanf("%s", &AcNum);
                    printf("\nHow many Rs. Do you wants to Pay=");
                    scanf("%s", &PayRs);
                    printf("\nYour Payment has been done Successfully.....");
                    printf("\n\nHere are Your Receipt....");
                    printf("\n            * Receiver's Name= %s", AcName);
                    printf("\n            * Receiver's Account No.= %s", AcNum);
                    printf("\n            * IFSC Code= %s", ifsc);
                    printf("\n            * Amount(in Rs.)= %s", PayRs);
                    printf("\n            * Date= 24/06/20023 (14:36)");
                    printf("\n            * Ref ID= 36512569584635");
                    printf("\n\n                     *** Thanks for using Paytm ***");
                    printf("\nIf You face error You can Call on Our Custumber Care Number");
                    printf("\nOur Customer Care Number is 1800 XXXX XXXX");
                    break;
                /////////// Here Case 2(1) are Finish Successfully......///////////

                ////////// Here Case 2(2) are Start......///////////
                case 2:
                    printf("\n\n --> Enter Your Mobile Number= ");
                    scanf("%s", Num);
                    printf("\n --> Enter Your Recharge Amount= ");
                    scanf("%s", RecRs);
                    printf("\nYour Recharge has been done Successfully.....");
                    printf("\nIf You face error You can Call on Our Custumber Care Number");
                    printf("\nOur Customer Care Number is 1800 XXXX XXXX");
                    break;
                /////////// Here Case 2(2) are Finish Successfully......///////////

                ////////// Here Case 2(3) are Start......///////////
                case 3:
                    printf("\n\n --> Enter Your Bill Name= ");
                    scanf("%s", &BilName);
                    printf("\n --> Enter Your State Name= ");
                    scanf("%s", &StaName);
                    printf("\n --> Enter Your Application Number= ");
                    scanf("%s", &AppNum);
                    printf("\n --> Enter Your Payment(in Rs.)= ");
                    scanf("%s", &PayRs);
                    printf("\nYour Recharge has been done Successfully.....");
                    printf("\nIf You face error You can Call on Our Custumber Care Number");
                    printf("\nOur Customer Care Number is 1800 XXXX XXXX");
                    break;
                /////////// Here Case 2(3) are Finish Successfully......///////////

                ////////// Here Case 2(4) are Start......///////////
                case 4:
                    printf("\n\nEnter Starting Station Name= ");
                    scanf("%s", &StrtSta);
                    printf("\nEnter Ending Station Name= ");
                    scanf("%s", &EndSta);
                    printf("\nEnter Journey Date= ");
                    scanf("%s", &Jdate);
                    printf("\n\nHere Are the Trains Between %s & %s........", StrtSta, EndSta);
                    printf("\n        1.  Vande Bharat NEW Exp(2598653)    at 05:30");
                    printf("\n        2.  Jammu DEEP LUCK Exp(5892653)    at 09:10");
                    printf("\n        3.  Golden Temp SUPER Exp(9954756)    at 12:40");
                    printf("\n        4.  Higher Kerla Exp(6498653)    at 15:30");
                    printf("\n        5.  Virtual Moon Exp(8998553)    at 19:25");
                    printf("\n        6.  Delhi India Sun Exp(2752369)    at 23:55");
                    printf("\n\nWhich Train do You Wants for your Journey");
                    printf("\nEnter The Train Number= ");
                    scanf("%s", &TrainNo);
                    printf("\nThe Max Tickets Book One Time is 4:");
                    printf("\nHow Many Tickets do you wants to Book= ");
                    scanf("%d", &TikNo);
                    switch (TikNo)
                    {
                    case 1:
                        printf("Enter the Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("Your Ticket Amount is 415");
                        printf("\nEnter Your UPI id For Payment= ");
                        scanf("%s", &Pay);
                        printf("\nYour Ticket has Been Confermed Successfully...........");
                        printf("\nYour PNR Number is 2256454854785");
                        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
                        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
                        printf("\nHave a Great Journey");
                        break;

                    case 2:
                        printf("\nEnter the 1st Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 1st Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 1st Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 2nd Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 2nd Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 2nd Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("Your Ticket Amount is 830");
                        printf("\nEnter Your UPI id For Payment= ");
                        scanf("%s", &Pay);
                        printf("\nYour Ticket has Been Confermed Successfully...........");
                        printf("\nYour PNR Number is 2256454854785");
                        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
                        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
                        printf("\nHave a Great Journey");
                        break;

                    case 3:
                        printf("\nEnter the 1st Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 1st Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 1st Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 2nd Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 2nd Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 2nd Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 3rd Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 3rd Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 3rd Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("Your Ticket Amount is 1245");
                        printf("\nEnter Your UPI id For Payment= ");
                        scanf("%s", &Pay);
                        printf("\nYour Ticket has Been Confermed Successfully...........");
                        printf("\nYour PNR Number is 2256454854785");
                        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
                        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
                        printf("\nHave a Great Journey");
                        break;

                    case 4:
                        printf("\nEnter the 1st Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 1st Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 1st Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 2nd Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 2nd Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 2nd Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 3rd Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 3rd Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 3rd Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("\nEnter the 4th Passenger Name= ");
                        scanf("%s", &TikName);
                        printf("Enter the 4th Passenger Age= ");
                        scanf("%s", &TikAge);
                        printf("Enter the 4th Passenger Gender= ");
                        scanf("%s", &TikGen);
                        printf("Your Ticket Amount is 1660");
                        printf("\nEnter Your UPI id For Payment= ");
                        scanf("%s", &Pay);
                        printf("\nYour Ticket has Been Confermed Successfully...........");
                        printf("\nYour PNR Number is 2256454854785");
                        printf("\nYour Berth Number & All other Information Will sent you Shortly on Your Registered Mobile No.");
                        printf("\nThanks For Your Choosing Jain's IRCTC Railway Inquiry Department");
                        printf("\nHave a Great & Beautiful Journey");
                        break;
                    }
                    break;
                /////////// Here Case 2(4) are Finish Successfully......///////////

                ////////// Here Case 2(5) are Start......///////////
                case 5:
                    printf("\n\nEnter Your Details.......");
                    printf("\n\n --> Enter your 16 Digit Aadhar Number= ");
                    scanf("%s", &AadharNO);
                    printf("\n --> Enter your Name= ");
                    scanf("%s", &Name);
                    printf("\n --> Enter your Mobile Number= ");
                    scanf("%s", &Phone);
                    printf("\n --> Enter your E-mail id= ");
                    scanf("%s", &Email);
                    printf("\n --> Emter your PAN No.=");
                    scanf("%s", &PanNO);
                    printf("\n --> Enter Your State Name= ");
                    scanf("%s", &StaName);
                    printf("\n --> Enter Your Bank Name= ");
                    scanf("%s", &bnk);
                    printf("\n --> Enter IFSC Code= ");
                    scanf("%s", &ifsc);
                    printf("\n --> Enter Account Holder's Name= ");
                    scanf("%s", &AcName);
                    printf("\n --> Enter Account Number= ");
                    scanf("%s", &Ac);
                    printf("\n --> Enter Your Application Number= ");
                    scanf("%s", &AppNum);
                    printf("\n --> Enter Your Loan Payment(in Rs.)= ");
                    scanf("%s", &PayRs);
                    printf("\nYour Recharge has been done Successfully.....");
                    printf("\nIf You face error You can Call on Our Custumber Care Number");
                    printf("\nOur Customer Care Number is 1800 XXXX XXXX");
                    break;
                /////////// Here Case 2(5) are Finish Successfully......///////////
                }
            }
            else
            {
                printf("Error, PLease Re-Enter your Password again\n");
                goto NMA;
            }
        }
        else
        {
            printf("Error..... You Enter Wrong Account Number OR Mobile Number");
            goto NM;
        }
    /////////// Here Case 2 are Finish Successfully......///////////
    }
    return 0;
}