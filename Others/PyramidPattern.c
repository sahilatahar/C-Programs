 #include <stdio.h>
#include<conio.h>
int  main()
{
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=2*n-1; j++) {
            if(j>=n+1-i && j<=n-1+i) {
                printf("*");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
/*
#include <stdio.h>
#include <conio.h>

void printSpaces(int n);
void printStars(int n);

int main()
{  
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(int i	 = n ; i >= 1 ; i--) {
	printSpaces(i);
	
	printStars(n-i);
	printStars(n-i-1);
	printf("\n");
		}
	getch();
	return 0;
}
void printSpaces(int n)
{
	if(n>1)
	  {
	  	printf("  ");
		printSpaces(n-1);
	  }
}
void printStars(int n)
{
	if(n >= 1)
	  {
	  	printf("*");
		printStars(n-1);
	  }
}
*/