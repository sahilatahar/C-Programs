#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int divide(int, int);

int main()
{

    int input, a, b;

    printf("Choose an operation: \n");
    printf("[1] Addition.\n");
    printf("[2] Subtraction.\n");
    printf("[3] Multiplication.\n");
    printf("[4] Division.\n");
    printf("Your Choice: ");

    scanf("%d", &input);

    if (input >= 1 && input <= 4)
    {
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
    }

    switch (input)
    {
    case 1:
        printf("Sum of %d and %d is: %d\n", a, b, sum(a, b));
        break;

    case 2:
        printf("Subtract of %d and %d is: %d\n", a, b, sub(a, b));
        break;

    case 3:
        printf("Multiply of %d and %d is: %d\n", a, b, mul(a, b));
        break;

    case 4:
        printf("Divide of %d and %d is: %d\n", a, b, divide(a, b));
        break;

    default:
        printf("Tumko bola n 4 hi option hai");
        exit(0);
    }

    // getch();
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}


int divide(int a, int b)
{
    return a / b;
}