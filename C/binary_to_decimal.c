#include <stdio.h>
#include <math.h>

int binary_to_decimal(long long n);
int decimal_to_binary(long long n);

int main()
{
    long long n;
    char choice;
    printf("Choose an option:\nA: binary_to_decimal\nB: decimal_to_binary\n");
    scanf("%c", &choice);

    if (choice != 'A' && choice != 'B') {
        printf("Invalid choice!\n");
    }
    else if (choice == 'A') {
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("The decimal number is: %lld\n", binary_to_decimal(n));
    }
    else {
        printf("Enter a decimal number: ");
        scanf("%lld", &n);
        printf("The binary number is: %d\n", decimal_to_binary(n));
    }
    return 0;
}

int binary_to_decimal(long long n)
{

    int result = 0, i = 0, last_digit;

    while(n != 0)
    {
        // This is to obtain the last digit from the number
        last_digit = n % 10;
        n /= 10;
        result += last_digit * pow(2, i);
        ++i;
    }

    return result;
}

int decimal_to_binary(long long n)
{

    long long bin = 0;
    int remainder, i = 1, step = 1;

    while(n != 0)
    {
        remainder = n%2;
        n /= 2;
        bin += remainder * i;
        i *= 10;
    }
    return bin;
}
