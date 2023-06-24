#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n, l, i, t, f, r, o, h, z, y, Accoa, a, w, nn, ll, eq;
    char AadharNO[100], Name[100], Phone[100], Email[100], DOB[100], PanNO[100], Nam[100], Ac[100], ac[] = "64876162546", Pass[100], pass[] = "@hdfc.123", Nae[100], Ace[100], ace[] = "64876162546", Passe[100], passe[] = "@hdfc.123", Ammmm[100], Mon[100];
    char bnk[100], ifsc[100], acname[100], paym[100], UPI[100], upi[] = "020202", acccn[100];
    char Naee[100], Acee[100], acee[] = "64876162546", Passee[100], passee[] = "@hdfc.123", Ammee[100], tkne[100];
    char Naenee[100], FNaee[100], Phnee[100], Adee[100], Naeea[100], Phneea[100], Bkkn[100], Akkn[100], ifscnn[100], Dnnn[100], Upppi[100], Upin[100], Accee[100], Amntt[100];
    printf("\n                          *** HDFC Banking System ***       ");
    printf("\n                            ** Welcome to HDFC Bank **");
    printf("\n* Press 1 for New a/c");
    printf("\n* Press 2 for Exist a/c");
    printf("\n* Press 3 for Money trasfer");
    printf("\n  Enter your Answer= ");
    scanf("%d", &n);

    switch (n)
    {
    ////////// Here Case 1 are Start......///////////
    case 1:
    MN:
        printf("\n--> Enter your 16 Digit Aadhar Number= ");
        scanf("%s", &AadharNO);
        printf("\n\n--> Enter your Name= ");
        scanf("%s", &Name);
        printf("\n--> Enter your Mobile Number= ");
        scanf("%s", &Phone);
        printf("\n--> Enter your E-mail= ");
        scanf("%s", &Email);
        printf("\n--> Enter your Date of Birth= ");
        scanf("%s", &DOB);
        printf("\n--> Emter your PAN No.=");
        scanf("%s", &PanNO);
        printf("\nThe Minimum Amount for Open Your New Bank Account is Rs.500");
        printf("\nEnter the amount that you want to deposit in your account= ");
        scanf("%d", &z);
        if (z >= 500)
        {
            printf("\n                  ** Thanks For joining HDFC Bank **\n");
            printf("\n\nHere are Your Details......");
            printf("\n              * Name= %s", Name);
            printf("\n              * Phone No.= %s", Phone);
            printf("\n              * E-mail id= %s", Email);
            printf("\n              * Date of Birth= %s", DOB);
            printf("\n              * Pan Card No.= %s", PanNO);
            printf("\n              * Account No.= 64876162546");
            printf("\n              * Password= @hdfc.123");
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
    NM:
        printf("\n                        ** Welcome again in HDFC Bank **");
        printf("\n\n\n* Press 1 for Withdraw\n");
        printf("* Press 2 for Deposite\n");
        printf("* Press 3 for Money Transfer Only\n");
        printf("  Enter your Responce= ");
        scanf("%d", &a);
        switch (a)
        {
            ////////// Here Case 2(1) are Start......///////////
        case 1:
            printf("\n\n -->Enter your Name= ");
            scanf("%s", &Nam);
            printf("\n -->Enter your Account Number= ");
            scanf("%s", &Ac);
            if (strcmp(Ac, ac)== 0)
            {
            Aq:
                printf("\n -->Enter your Password=");
                scanf("%s", &Pass);
                if (strcmp(Pass, pass) == 0)
                {
                    printf("\n\nHello %s,", Nam);
                    printf("\nHow many Rs. Do you wants to Withdraw= ");
                    scanf("%s", &Mon);
                    {
                        printf("\nHere are Your Receipt....");
                        printf("\n\n            * Name= %s", Nam);
                        printf("\n            * Account No.= %s", Ac);
                        printf("\n            * Withdraw Amount(in Rs.)= %s", Mon);
                        printf("\n            * Date= 24/06/20023");
                        printf("\n            * Token Number= A2QFgi");
                        printf("\n\nYou will get your money on Counter No. 2, After Seeing this Receipt.\n");
                        printf("\n\n\n\n                    * Thanks for using HDFC Bank *");
                    }
                }
                else
                {
                    printf("Error, PLease Re-Enter your Password again\n");
                    goto Aq;
                }
            }
            else
            {
                printf("Error");
                goto NM;
            }
            break;
            /////////// Here Case 2(1) are Finish Successfully......///////////

            ////////// Here Case 2(2) are Start......///////////
        case 2:
        Ds:
            printf("\n\n -->Enter your Name= ");
            scanf("%s", &Nae);
            printf("\n -->Enter your Account Number= ");
            scanf("%s", &Ace);
            if (strcmp(Ace, ace) == 0)
            {
                printf("\n -->Enter Your Password= ");
                scanf("%s", &Passe);
                if (strcmp(Passe, passe) == 0)
                {
                    printf("\nSuccessfully LogIn....");
                    printf("\nNow, You can deposite the money in your Account.");
                    printf("\nEnter the amount that You wants to deposite= ");
                    scanf("%s", &Ammmm);
                    printf("\nThankyou %s,", Nae);
                    printf(" Now your Bank Balance is= Rs.245366.87");
                    printf("\n\nPress 1 to get Receipt");
                    printf("\nPress 0 for Exit  ");
                    scanf("%d", &w);

                    if (w == 1)
                    {
                        printf("\nHere are your Reciept....");
                        printf("\n            * Name= %s", Nae);
                        printf("\n            * Account No.= %s", Ace);
                        printf("\n            * Deposite Amount(in Rs.)= %s", Ammmm);
                        printf("\n            * Bank Balance= Rs.245366.87");
                        printf("\n            * Date= 24/06/20023 (14:27)");
                        printf("\n            * Token Number= A2QFgi");
                        printf("\n            * Ref Id= 14524565852455");
                        printf("\n\n\nThankyou,We Hope that you Enjoy our Service....\n");
                    }
                    else
                    {
                        printf("Thankyou,We Hope that you Enjoy our Service");
                    }
                }
                else
                {
                    printf("\nError,Incorrect Password\n");
                    printf("Please Enter valid Password\n\n");
                    goto Ds;
                }
            }
            else
            {
                printf("\nError,Incorrect Account Number or Name\n");
                printf("Please Enter valid Account Number\n\n");
                goto Ds;
            }
            break;
            /////////// Here Case 2(2) are Finish Successfully......///////////

            ////////// Here Case 2(3) are Start......///////////
        case 3:
        Dn:
            printf("\n\n -->Enter your Name= ");
            scanf("%s", &Nam);
            printf("\n -->Enter your Account Number= ");
            scanf("%s", &Ac);
            if (strcmp(Ac, ac) == 0)
            {
                printf("\n -->Enter your Password=");
                scanf("%s", &Pass);
                if (strcmp(Pass, pass) == 0)
                {
                Kk:
                    printf("\n\nHello %s,", Nam);
                    printf("\nYou have Successfully LogIn in your Account...");
                    printf("\n\nEnter Bank A/c details...");
                    printf("\n--> Enter Receiver's Bank= ");
                    scanf("%s", &bnk);
                    printf("--> Enter IFSC Code= ");
                    scanf("%s", &ifsc);
                    printf("--> Enter Account Holder's Name= ");
                    scanf("%s", &acname);
                    printf("--> Enter Account Number= ");
                    scanf("%s", &acccn);
                    printf("\nHow many Rs. Do you wants to Pay=");
                    scanf("%s", &paym);
                    printf("Enter your 6-digit UPI PIN= ");
                    scanf("%s", &UPI);
                    if (strcmp(UPI, upi) == 0)
                    {
                        printf("\nYour Payment has been done Successfully.....");
                        printf("\n\nHere are Your Receipt....");
                        printf("\n            * Name= %s", acname);
                        printf("\n            * Account No.= %s", acccn);
                        printf("\n            * IFSC Code= %s", ifsc);
                        printf("\n            * Amount(in Rs.)= %s", paym);
                        printf("\n            * Date= 24/06/20023 (14:36)");
                        printf("\n            * Ref ID= 36512569584635");
                        printf("\n\n\n\n                   *** Thanks for using HDFC Bank ***");
                    }
                    else
                    {
                        printf("Soory, You Enter wrong UPI PIN");
                        printf("Please fill the form again");
                        goto Kk;
                    }
                }
                else
                {
                    printf("\nError,Incorrect Password\n");
                    printf("Please Enter valid Password\n\n");
                    goto Dn;
                }
            }
            else
            {
                printf("\nError,Incorrect Account Number or Name\n");
                printf("Please Enter valid Account Number\n\n");
                goto Dn;
            }
            break;
            /////////// Here Case 2(3) are Finish Successfully......///////////
        }
        break;
    /////////// Here Case 2 are Finish Successfully......///////////

    ////////// Here Case 3 are Start......///////////
    case 3:
        printf("\n                        ** Welcome in HDFC Bank **");
        printf("\n\nEnter Your Details.....");
        printf("\n\n      --> Enter Your Name= ");
        scanf("%s", &Naenee);
        printf("\n      --> Enter Your Father Name= ");
        scanf("%s", &FNaee);
        printf("\n      --> Enter Your Mobile No.= ");
        scanf("%s", &Phnee);
        printf("\n      --> Enter Your Aadhar No.= ");
        scanf("%s", &Adee);
        printf("\n      --> Enter Your Account No.= ");
        scanf("%s", &Accee);
        printf("\n\nEnter Receiver's Details.....");
        printf("\n\n      --> Enter Receiver's Name= ");
        scanf("%s", &Naeea);
        printf("\n      --> Enter Receiver's Mobile No.= ");
        scanf("%s", &Phneea);
        printf("\n      --> Enter Receiver's Bank Name= ");
        scanf("%s", &Bkkn);
        printf("\n      --> Enter Receiver's Account No.= ");
        scanf("%s", &Akkn);
        printf("\n      --> Enter Receiver's IFSC Code= ");
        scanf("%s", &ifscnn);
        printf("\n      --> Enter Sending Date & Time= ");
        scanf("%s", &Dnnn);
        printf("\n\n\nPress 1 for UPI Payment\n");
        printf("\nPress 2 for RTGS\n");
        printf("\nPress 3 for NEFT\n");
        printf("Enter your Responce= ");
        scanf("%d", &eq);
        switch (eq)
        {
        case 1:
            printf("\n\nYou can Transfer Max Rs.20,000 through this Method..........");
            printf("\n\nEnter Your UPI Id= ");
            scanf("%s", &Upppi);
            printf("Enter Your UPI Pin= ");
            scanf("%s", &Upin);
            printf("Enter the Amount= ");
            scanf("%s", &Amntt);
            printf("\nSuccessfully Your Payment has been done.....");
            printf("\nHere are Your Receipt.....");
            printf("\n                  Your Name= %s", Naee);
            printf("\n                  Your Mobile No.= %s", Phnee);
            printf("\n                  Your Account No.= %s", Accee);
            printf("\n                  Receiver's Name= %s", Naeea);
            printf("\n                  Receiver's Bank Name= %s", Bkkn);
            printf("\n                  Receiver's Account No.= %s", Akkn);
            printf("\n                  Your UPI Id= %s", Upppi);
            printf("\n                  Amount= %s", Amntt);
            break;
        case 2:
            printf("\n\nYou can Transfer max 2,00,000 through this Method..........");
            printf("\n\nEnter the Amount= ");
            scanf("%s", &Amntt);
            printf("\nSuccessfully Your Payment has been done.....");
            printf("\nHere are Your Receipt.....");
            printf("\n                  Your Name= %s", Naee);
            printf("\n                  Your Mobile No.= %s", Phnee);
            printf("\n                  Your Account No.= %s", Accee);
            printf("\n                  Receiver's Name= %s", Naeea);
            printf("\n                  Receiver's Bank Name= %s", Bkkn);
            printf("\n                  Receiver's Account No.= %s", Akkn);
            printf("\n                  Your Ref Id= 289526142152");
            printf("\n                  Amount= %s", Amntt);
            break;
        case 3:
            printf("\n\nYou can Transfer max 10,00,000 through this Method..........");
            printf("\n\nEnter the Amount= ");
            scanf("%s", &Amntt);
            printf("\nSuccessfully Your Payment has been done.....");
            printf("\nHere are Your Receipt.....");
            printf("\n                  Your Name= %s", Naee);
            printf("\n                  Your Mobile No.= %s", Phnee);
            printf("\n                  Your Account No.= %s", Accee);
            printf("\n                  Receiver's Name= %s", Naeea);
            printf("\n                  Receiver's Bank Name= %s", Bkkn);
            printf("\n                  Receiver's Account No.= %s", Akkn);
            printf("\n                  Your Ref Id= 289526142152");
            printf("\n                  Amount= %s", Amntt);
            break;
        }
        break;
    /////////// Here Case 3 are Finish Successfully......///////////

    ////////// Here Default Case Start......///////////
    default:
    {
        printf("\n  Soory You Enter wrong Responce Number");
    }
        /////////// Here Default Case Finish Successfully......///////////
    }
    return 0;
}