#include <stdio.h>

void menu();
void evenOdd();
void gcd();

int main(void)
{
    menu();
    return 0;
}

void menu()
{
    printf("Select an option ...\n\te: even/odd\n\tg: gcd\n\tq: quit\n");
    char option = getchar();
    switch (option)
    {
        case 'e':
            evenOdd();
            break;
        case 'g':
            gcd();
            break;
        case 'q':
            break;
        default:
            break;
    }
}

void evenOdd()
{
    printf("Give a number:\n");
    int number;
    scanf("%d", &number);
    
    if (number%2==0)
    {
        printf("%i is even\n", number);
    } else {
        printf("%i is odd\n", number);
    }
}

void gcd()
{
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("\nEnter a second number: ");
    int b;
    scanf("%d", &b);

    // Determine the largest number
    if (b > a)
    {
        b=a+b;
        a=b-a;
        b=b-a;
    }

    int largestDivider = 1;
    for (int divider=1; divider<=b; divider++)
    {
        if (a % divider==0) {
            if (b % divider==0) {
                largestDivider = divider;
            }
        }
    }

    printf("The largest common divider between %i and %i is %i.\n", a, b, largestDivider);
}