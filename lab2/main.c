#include <stdio.h>

char newstr(char str[]);

int main(void)
{
	char str[256];
	scanf("%s", str);
	int counter = newstr(str);


	printf("%s", str);
	printf("\n");
	printf("%d", counter);
	printf("\n");
return 0;
}
