#include <stdio.h>
#define MAX 81

int main()
{
  char name[MAX];
  char * ptr;

  printf("Please Input Your Name:\n");

  ptr = fgets(name, MAX, stdin);
  printf("nams:%s \n ptr:%s\n", name, ptr);

  return 0;
}
