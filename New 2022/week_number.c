// write the week number and print week day

#include<stdio.h>
#include<conio.h>

   int main()
   {
    int week;

    printf("Enter the week number=");
    scanf("%d",&week);

    if (week==1)
{
    printf("monday");
}
    else if (week==2)
{
    printf("tuesday");
}
    else if (week==3)
{
    printf("wednesday");
}
    else if (week==4)
{
    printf("tharusday");
}
    else if  (week==5)
{
    printf("friday");
}
    else if (week==6)
{
    printf("saturday");
}
    else if (week==7)
{
    printf("sunday");
}
    else
{
    printf("please enter the number 1 to 7");
}
    return 0;
}   

