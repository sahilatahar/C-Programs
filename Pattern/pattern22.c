/*

Rectangle Pattern:

How to print this pattern:

********************
**                **
* *              * *
*  *            *  *
*   *          *   *
*    *        *    *
*     *      *     *
*      *    *      *
*       *  *       *
*        **        *
*        **        *
*       *  *       *
*      *    *      *
*     *      *     *
*    *        *    *
*   *          *   *
*  *            *  *
* *              * *
**                **
********************

*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || j == i || j == n - i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
