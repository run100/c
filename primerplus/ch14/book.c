#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(int argc, char const *argv[])
{
  /* code */
  struct book library, *pt;
  printf("Please enter the book title.\n");
  // gets(library.title); /* access to the title portion         */
  scanf("%s", library.title);
  printf("Now enter the author.\n");
  scanf("%s", library.author);
  printf("Now enter the value.\n");
  scanf("%f", &library.value);
  printf("%s by %s: %.2f\n", library.title, library.author, library.value);
  printf("%s: \"%s\" ($%.2f)\n", library.author,
          library.title, library.value);
  return 0;
}
