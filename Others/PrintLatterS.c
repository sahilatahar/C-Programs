#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
    for(j=1;j<=n+1;j++){
    if(i==1 ||i==(n+1)/2 || i==n){
    printf("*");}
    else if(i<=(n+1)/2 && j==1){
    printf("*");}
    else if(i>=(n+1)/2 && j==n+1){
    printf("*");}
    
    else{printf(" ");}
    
    }
    printf("\n");}
}
