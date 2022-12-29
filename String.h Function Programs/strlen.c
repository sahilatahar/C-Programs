#include <stdio.h>
#include <conio.h>

int main()
{
	char str[100];
	int i = 0;
	printf("Enter the string: ");
	gets(str);
	
	while(str[i] != '\0')
	{
		i++;
	}
	printf("Length of string is %d.",i);
	return 0;
}
