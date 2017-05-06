#include <stdio.h>

long factorial(int);

int main()
{
    int number;

    printf("Enter number to calculate it's factorial\n");
    scanf("%d", &number);

    printf("%d factorial = %ld\n", number, factorial(number));

    return 0;
}

long factorial(int n)
{
    int i;
    long result = 1;

    for (i = 1; i <= n; i++)
        result = result * i;

    return result;
}

/*

    Alternative recursive solution:

    #include<stdio.h>
 
    long factorial(int);
     
    int main()
    {
      int n;
      long f;
     
      printf("Enter an integer to find factorial\n");
      scanf("%d", &n); 
     
      if (n < 0)
        printf("Negative integers are not allowed.\n");
      else
      {
        f = factorial(n);
        printf("%d! = %ld\n", n, f);
      }
     
      return 0;
    }
     
    long factorial(int n)
    {
      if (n == 0)
        return 1;
      else
        return(n * factorial(n-1));
    }

*/
