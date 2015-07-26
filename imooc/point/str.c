#include <stdio.h>

int main()
{
	char str[] = "100";
	char *str2="world";
	char str3[10];

	printf("Input the value:\n");
	scanf("%s", str3);
	
	printf("str is %s\n", str);
	printf("str2 is %s\n", str2);
	printf("str3 is %s\n", str3);

	return 0;
}
