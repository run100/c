#include <stdio.h>

int main()
{
  char *msg = "Dno't be a fool!";
  char *copy;

  copy = msg;

  printf("%s\n",copy);

  printf("msg = %s; &msg = %p; value=%p\n", msg, &msg, msg);
  printf("copy = %s; &copy = %p; value = %p\n",
            copy, &copy, copy);

  return 0;
}
