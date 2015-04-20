#include <stdio.h>

int main()
{
  char heart[] = "I LOVE C!";
  char *head = "I love PHP!";

  int i;
  for(i=0;i<6;i++){
    //printf("%d", heart[i]);
    //putchar(heart[i]);
    //putchar( *( heart + i ) );
  }
  //putchar("\n");

  for(i=0;i<6;i++){
    //printf("%d", heart[i]);
    //putchar(head[i]);
    //putchar( *(head+i) );
  }
  //putchar("\n");


  while( *(head) != '\0' ){
    putchar(*(head++));
  }

  putchar("\n");

  return 0;
}
