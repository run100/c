#include <stdio.h>
#define MAXLINE 20

int main(int argc, char *argv[]) {
  char line[MAXLINE];

  while ( fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n') {
    fputs(line, stdout);
  }


  return 0;
}
