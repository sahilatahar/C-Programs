//? Print all perfect numbers between the given interval using functions.

#include <stdio.h>
#include <conio.h>

int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int n, m;

    printf("Enter the range: ");
    scanf("%d %d", &n, &m);

    printf("Perfect number between %d and %d are : \n", n, m);

    for (int i = n; i <= m; i++)
    {
        if (isPerfect(i))
        {
            printf("%d\t", i);
        }
    }
    getch();
    return 0;
}