#include <stdio.h>
void mikado(int);

int main(int argc, char *argv[])
{
    //int pooh = 24;
    //printf("%d %p\n", pooh, &pooh);

    int pooh=24,bah=5;

    printf("In main(),p=%d,&p=%p\n",pooh,&pooh);
    printf("In main(),b=%d,&b=%p\n",bah,&bah);
    mikado(pooh);
    return 0;
}


void mikado(int bah)
{
  int pooh=24;
  printf("In main(),p=%d,&p=%p\n",pooh,&pooh);
  printf("In main(),b=%d,&b=%p\n",bah,&bah);
}
