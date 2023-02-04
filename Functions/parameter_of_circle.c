#include <stdio.h>
#include <conio.h>

#define PI 3.14

float calPara(float r)
{
    return (2 * PI * r);
}

int main()
{

    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);

    printf("Parameter of circle is %f",calPara(r));

    getch();
    return 0;
}