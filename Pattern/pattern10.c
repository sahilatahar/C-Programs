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
 ***********************
*************************
 ***********************
  *********************
   *******************
    *****************
     ***************
      *************
       ***********
        *********
         *******
          *****
           ***
            *

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // First method using two loops

    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (i < n)
            {
                if (j >= n - i && j <= n + i)
                    printf("*");
                else
                    printf(" ");
            }

            else if (i >= n)
            {
                if (j >= i - n && j <= 3 * n - i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    /* Second Method to print using four loops

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

    for (int i = n -2; i >= 0; i--)
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

    */

    //  Using Six loops

    /*

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

    for (int i = n - 2; i >= 0 ; i--)
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
