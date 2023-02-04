// Factorial of a function

#include <stdio.h>
#include <conio.h>

int factorial(int *); // function prototype

int main()
{
    int n, fact;

    printf("Enter the number: ");
    scanf("%d", &n);

    fact = factorial(&n); // fucntion calling

    printf("Factorial of %d is %d\n", n, fact);

    getch();
    return 0;
}

// num = &n; *num == n

int factorial(int *num) // function defination
{
    int fact = 1;
    for (int i = 1; i <= *num; i++)
    {
        fact *= i; // fact = fact * i;
    }
    return fact;
}