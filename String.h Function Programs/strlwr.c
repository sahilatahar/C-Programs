#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the  string: ");
	gets(str);
	
   for(int i = 0; i < strlen(str); i++ ) {
   	     if((int)str[i] >= 65 && (int)str[i] <= 90) {
   	     	str[i] = (char)((int)str[i] + 32);
   	     	}
   	}
	printf("String in lower case is : ");
	puts(str);
	
	return 0;
}
