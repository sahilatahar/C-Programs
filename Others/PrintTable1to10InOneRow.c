#include<stdio.h>
#include<conio.h>

int main()
{   int i,j,k;

    for(i=1; i<=10; i++) {
        k=i;
        for(j=1; j<=10; j++) {
            if(k<=9)
                printf(" ");
            printf("%d",k);
            k=k+i;
            if(k<=9)
                printf("  ");
            else
                printf("  ");
        }

        printf("\n");
    }
    getch();
    return 0;
}
