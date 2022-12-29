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
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i = 0; i < n ; i++) {
        for(int j = 0 ; j < i ; j++) {
            printf("*");
        }
        printf("\n");
    }   
    getch();
    return 0;
}
