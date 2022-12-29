#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100],temp;
	printf("Enter the  string: ");
	gets(str);
	
   for(int i = 0; i < strlen(str)/2; i++ ) {
   	     temp = str[strlen(str) - i - 1];
   	     str[strlen(str) - i - 1] = str[i] ;
   	     str[i] = temp;
   	}
	printf("Reverse string is : ");
	puts(str);
	
	return 0;
}
