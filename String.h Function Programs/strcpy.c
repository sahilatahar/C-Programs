#include <stdio.h>
#include <conio.h>

int main()
{
	char str1[100];
	char str2[100];
	
	int i = 0,j = 0;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	
	while(1)
	{
		i++;
		if(str1[i] == '\0') {
		while(str2[j] != '\0')
		{
			str1[i] = str2[j];
			i++;
			j++;
		}
		break;
	  }
	}
	printf("First string is : ");
	puts(str1);
	printf("Second string is : ");
	puts(str2);
	
	return 0;
}
