#include <stdio.h>
#include <conio.h>
#include <string.h>

int stringcmp(char*,char*);

int main()
{
	char str1[100];
	char str2[100];
	
	int i = 0,j = 0;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	if(stringcmp(str1,str2) == 0) {
		printf("Strings are same.");
		} else {
			printf("String is different");
			}
	return 0;
}

int stringcmp(char str1[100],char str2[100]) {
	if(strlen(str1) < strlen(str2)) {
		return -1;
		} else if(strlen(str1) > strlen(str2)) {
        return 1;}
        
	for(int i = 0; i < (strlen(str1) < strlen(str2) ? strlen(str1) : strlen(str2)) ; i ++ ) {
		if((int)str1[i] < (int)str2[i]) {
		return -1;
		} else if((int)str1[i] < (int)str2[i]) {
        return 1;}
		}
	return 0;
	}