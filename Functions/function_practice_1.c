#include <stdio.h>
#include <conio.h>

void printTable(int i, int k)
{

    for (int z = i; z <= k; z++)
    {
        printf("\nThe table of %d is: \n", z);

        for (int j = 1; j < 10; j++)
        {
            printf("%d\n", i * j);
        }
    }
    printTable(i,k);
}

int main()
{

    int i = 5, j, k;
    printTable(i, 10);
    
    getch();
    return 0;
}
