#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the  string: ");
	gets(str);
	
   for(int i = 0; i < strlen(str); i++ ) {
   	     if((int)str[i] >= 97 && (int)str[i] <= 122) {
   	     	str[i] = (char)((int)str[i] - 32);
   	     	}
   	}
	printf("String in upper case is : ");
	puts(str);
	
	return 0;
}
