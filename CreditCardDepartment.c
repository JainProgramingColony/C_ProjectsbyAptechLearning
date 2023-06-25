#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n, a;
    char AadharNO[100], Name[100], Phone[100], Email[100], DOB[100], PanNO[100], StaName[100], HAdd[100], bnk[100], ifsc[100], AcName[100], Ac[100], OTP[100], CardNo[100], cardNo[] = "250188652547", CardPin[100], cardPin[] = "364521", UPI[100], UPIPIN[100], Rs[100];
    printf("\n                          ****** Jain's Credit Card Department ******       ");
    printf("\n                            **** Welcome to Jain Banking Colony ****");
    printf("\n* Press 1 for New a/c");
    printf("\n* Press 2 for Exist a/c");
    printf("\n  Enter your Responce= ");
    scanf("%d", &n);
    switch (n)
    {
    ////////// Here Case 1 are Start......///////////
    case 1:
        printf("\n --> Enter your 16 Digit Aadhar Number= ");
        scanf("%s", &AadharNO);
        printf("\n\n --> Enter your Name= ");
        scanf("%s", &Name);
        printf("\n --> Enter your Mobile Number= ");
        scanf("%s", &Phone);
        printf("\n --> Enter your E-mail id= ");
        scanf("%s", &Email);
        printf("\n --> Enter your Date of Birth= ");
        scanf("%s", &DOB);
        printf("\n --> Emter your PAN No.=");
        scanf("%s", &PanNO);
        printf("\n --> Enter Your State Name= ");
        scanf("%s", &StaName);
        printf("\n --> Enter Your Home Address= ");
        scanf("%s", &HAdd);
        printf("\n --> Enter Your Bank Name= ");
        scanf("%s", &bnk);
        printf("\n --> Enter IFSC Code= ");
        scanf("%s", &ifsc);
        printf("\n --> Enter Account Holder's Name= ");
        scanf("%s", &AcName);
        printf("\n --> Enter Account Number= ");
        scanf("%s", &Ac);
        printf("\n --> Enter the OTP= ");
        scanf("%s", &OTP);
        printf("\nEnter the amount that you want to deposit in your Credit Account= ");
        scanf("%s", &Rs);
        printf("\nWe are Verifying Your Detils................\n");
        printf("Successfully Verified........");
        printf("\n\nHere are Your credit Card Details......");
        printf("\n              * Name= %s", Name);
        printf("\n              * Mobile No.= %s", Phone);
        printf("\n              * E-mail id= %s", Email);
        printf("\n -            * Aadhar Number= %s", AadharNO);
        printf("\n              * Bank Account No.= %s", Ac);
        printf("\n              * Credit Card No.= 2501 8865 2547");
        printf("\n              * Pin No.= 364521");
        printf("\n              * Credit Card Balance= %s", Rs);
        printf("\n              * Specific Number= 2569754852523");
        printf("\n\n--> After Sometime You will also Get Your Credit Card Details on Your Mobile Number Or Email id.");
        printf("\n--> Within 30 Days, You Will Get Your Credit Card on Our %s Branch", HAdd);
        printf(" & We are very excited and happy to get the opportunity to serve you as one of our respectable customer. We really thank you for choosing us. We can assure you that our all workers are very responsible and committed towards our customers. We also are confident about our good quality service.\n");
        printf("Our Customer Care Number is 1800 XXXX XXXX");
        break;
    /////////// Here Case 1 are Finish Successfully......///////////

    ////////// Here Case 2 are Start......///////////
    case 2:
        printf("\n                        ** Welcome again in Jain Banking Colony **");
        printf("\nLogin Your Credit Account.......");
    NM:
        printf("\n\n --> Enter your Name= ");
        scanf("%s", &Name);
        printf("\n --> Enter your Mobile Number= ");
        scanf("%s", &Phone);

        printf("\n --> Enter the OTP= ");
        scanf("%s", &OTP);
        printf("\n --> Enter Your Credit Card Number= ");
        scanf("%s", &CardNo);
        if (strcmp(CardNo, cardNo) == 0)
        {
        NMA:
            printf("\n -->Enter your Credit Pin No.=");
            scanf("%s", &CardPin);
            if (strcmp(CardPin, cardPin) == 0)
            {
                printf("\n\n\nWelcome %s", Name);
                printf("\n     * Press 1 for Bill Payment of Your Credit card... \n");
                printf("     * Press 2 for Deposite Money in Your Credit card... \n");
                printf("     * Press 3 for Check Balance of Your Credit card... \n");
                printf("     * Enter your Responce= ");
                scanf("%d", &a);
                switch (a)
                {
                case 1:
                    printf("\n\nCurrently Your Credit Bill is Rs 45000.25........");
                    printf("\nEnter the Amount that You wants To pay= ");
                    scanf("%s", Rs);
                    printf("\nEnter Your UPI Id For Pay Your Bill= ");
                    scanf("%s", UPI);
                    printf("\nEnter Your UPI PIN= ");
                    scanf("%s", UPIPIN);
                    printf("\nSuccessfully Payment...............");
                    printf("\nThanks You %s,Have a Nice Day", Name);
                    break;

                case 2:
                    printf("H\n\now many Rs. Do you wants to Deposite...........");
                    printf("\nEnter the Amount= ");
                    scanf("%s", Rs);
                    printf("\nEnter Your UPI Id For Deposite Money= ");
                    scanf("%s", UPI);
                    printf("\nEnter Your UPI PIN= ");
                    scanf("%s", UPIPIN);
                    printf("\nSuccessfully Payment...............");
                    printf("\nThanks You %s,Have a Nice Day", Name);
                    break;

                case 3:
                    printf("\n\nHello %s", Name);
                    printf("Your Credit Card Balance is Rs 65980.64");
                    printf("\nThanks You %s,Have a Nice Day", Name);
                    break;
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
            printf("Error..... You Enter Wrong Credit Card Number OR Mobile Number");
            goto NM;
        }
    /////////// Here Case 2 are Finish Successfully......///////////
    }
}