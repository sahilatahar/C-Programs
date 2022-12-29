#include <stdio.h>
#include <conio.h>

int main()
{
	char str[100],otherStr[100];
	int i = 0,strIndex = 0,endIndex = 0;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the starting and ending index: ");
	scanf("%d%d",&strIndex,&endIndex);
	
	while(1)
	{
		otherStr[i] = str[strIndex];
		strIndex++;
		i++;
		if(strIndex == endIndex)
		break;
	}
	printf("Concatinated string is: ");
	puts(otherStr);
	return 0;
}
