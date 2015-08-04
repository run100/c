#include <stdio.h>

int put1 ( const char * string ) {
  int count = 0;
  while ( *string ) {
    putchar(*(string++));
    count ++;
  }
  putchar('\n');

  return count;
}

int main()
{
  char line[81];
  scanf("%s", line);
  int cnt = 0;
  cnt = put1(line);
  printf("line cnt is %d\n", cnt);
  /* while ( fgets(line, 81, stdin) ) {
    fputs(line, stdout);
  }
  return 0;*/
}
