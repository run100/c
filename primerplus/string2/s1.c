#include <stdio.h>

int main()
{
	printf("hello %s\n", "world");	
	char heart[] = "I love wangfang";
	char *head = "i love myself";

	int i=0;
	int n1,n2;

	n1 = sizeof heart/sizeof heart[0];
	n2 = sizeof(head);

	
	printf("n1 is %d, n2 is %d", n1, n2);
	putchar('\n');
	for ( i=0; i<n1; i++ ) {
		//putchar(heart[i]);
		putchar( *(heart+i) );
	}

	putchar('\n');
	for ( i=0; i<n2; i++ ) {
		// putchar(head[i]);
		putchar( *(head+i) );
	}
	putchar('\n');
	
	while ( *(head) != '\0' ) {
		putchar(*(head++));
	}


	return 0;
}