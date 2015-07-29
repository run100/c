#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE * f = fopen("data.txt", "r");

  if ( f != NULL ) {
    char str[1024];
    if( fgets(str, 1024, f) != NULL ) {
      printf("str is %s\n", str);
    }

    fclose(f);
  }



  //puts('END');
  return 0;
}
