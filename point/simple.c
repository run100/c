#include <stdio.h>

void change(int pooh);

int main()
{
    int pooh=24,bsh=10;
	

   	printf("in main(), %d,%p\n", pooh, &pooh);
   	printf("in main(), %d,%p\n", bsh, &bsh);


	change(pooh);
	return 0;
}


void change(pooh)
{
	int bsh=10;

   	printf("in change(), %d,%p\n", pooh, &pooh);
   	printf("in change(), %d,%p\n", bsh, &bsh);
}
