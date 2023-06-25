#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    long a, b, c;
    printf("\nSelect any One Option to perform the Calculation in C Calculater.......");
    printf("\n\n 1) Addition  \t\t 2) Substraction");
    printf("\n 3) Multiplication  \t 4) Division");
    printf("\n 5) Exit");
    printf("\n Chooose One Option= ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\n1) For Addition......\n");
        printf(" -->Enter Frist Number= ");
        scanf("%ld", &a);
        printf(" -->Enter Second Number= ");
        scanf("%ld", &b);
        c = a + b;
        printf(" -->After Addition= %ld", c);
        break;

    case 2:
        printf("\n2) For Substraction......\n");
        printf(" -->Enter Frist Number= ");
        scanf("%ld", &a);
        printf(" -->Enter Second Number= ");
        scanf("%ld", &b);
        c = a - b;
        printf(" -->After Substraction= %ld", c);
        break;

    case 3:
        printf("\n3) For Multiplication......\n");
        printf(" -->Enter Frist Number= ");
        scanf("%ld", &a);
        printf(" -->Enter Second Number= ");
        scanf("%ld", &b);
        c = a * b;
        printf(" -->After Multiplication= %ld", c);
        break;

    case 4:
        printf("\n4) For Division......\n");
        printf(" -->Enter Frist Number= ");
        scanf("%ld", &a);
        printf(" -->Enter Second Number= ");
        scanf("%ld", &b);
        if (b == 0)
        {
            printf("\nDivisior Cannot be Zero.");
            printf("\n -->Enter another Value= ");
            scanf("%ld", &b);
        }

        c = a + b;
        printf(" -->After Division= %ld", c);
        break;

    case 5:
        printf("Exited");
        break;

    default:
        printf("Invalid Option!");
    }
}