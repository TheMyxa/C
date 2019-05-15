#include <stdio.h>
#include <string.h>
#include <ctype.h>

int newstr(char str[])
{
    	int counter = 0;

	for(int i = 0;i < strlen(str);i++)
	{
		str[i] = toupper(str[i]);
		if(str[i] == '(') str[i] = '<';
		else if(str[i] == ')') str[i] = '>';
		if(str[i] >= 'A' && str[i] <= 'Z') counter++;
	}
	return counter;
}
