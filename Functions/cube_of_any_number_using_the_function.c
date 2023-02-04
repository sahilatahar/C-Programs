// Cube of any number using the function

#include <stdio.h>
#include <conio.h>

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Cube of %d is %d", n, cube(n));

    getch();
    return 0;
}