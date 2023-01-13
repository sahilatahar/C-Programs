/*
How to print this pattern:

          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************
 *******************
*********************

*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // First Method to print

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j >= n - i && j <= n + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    /* Using Three loops

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    */
    getch();
    return 0;
}
