#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("%s, %p, %c\n", "we", "are", *"space farers");

  const char m1[40] = "we are space fares";
  printf("%s %d\n", m1, *(&m1));
  return 0;
}
