#include <stdio.h>
int units = 0;
void critic(void);

int main()
{
  extern int units;

  scanf("%d", &units);
  while (units != 56) {
    critic();
  }
  printf("You must have looked it up!\n");
  return 0;
}

void critic(void){
  printf("No luck, chummy. Try again.\n");
  scanf("%d", &units);
}
