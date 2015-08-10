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
  struct book library = {
    "php inter",
    "zhangzhongwang",
    20
  };

  printf("%s\n", library.title);

  struct book gift = {
    .value = 18.90,
    .author = "hello world",
    .title = "zhangzw"
  };

  printf("%s\n", gift.title);

  return 0;
}
