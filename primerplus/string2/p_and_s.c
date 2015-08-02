#include <stdio.h>

int main()
{
	char *msg = "ab";
	char * copy;

	printf("size of char is %d\n", sizeof(msg));
	printf("strlen of char is %d\n", strlen(msg));

	copy = msg;
	printf("%s\n", copy);

	printf("msg = %s; &msg = %p; value=%p\n",
		msg, &msg, msg);
	printf("copy = %s; &copy = %p; copy=%p\n",
		copy, &copy, copy);
	return 0;
}