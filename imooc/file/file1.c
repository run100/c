#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE * f = fopen("data.txt", "w");

  if ( f != NULL ) {
    fputs("Hello world", f);
    fclose(f);
  }



  //puts('END');
  return 0;
}
