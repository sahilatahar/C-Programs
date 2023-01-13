/*
How to print this pattern:

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *



*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // First Method using only two Loops (Best Method)

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= n)
            {
                if (j > n - i)
                    printf("*");
                else
                    printf(" ");
            }

            else if (i >= n)
            {
                if (j > (i - n))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    /* Using Four Loops
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= n - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    */

    getch();
    return 0;
}
