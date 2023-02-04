// Find all prime numbers between the given interval using functions

#include <stdio.h>
#include <conio.h>

int isPrimeNum(int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;

    printf("Enter the range: ");
    scanf("%d%d", &n, &m);

    for (int i = (n < m ? n : m); i < (n > m ? n : m); i++)
    {
        if (isPrimeNum(i))
        {
            printf("%d\t", i);
        }
    }

    getch();
    return 0;
}