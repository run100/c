#include <stdio.h>
#include <string.h> /* contains string function prototypes */


void fit(char *,unsigned int);


int main(void){
  char mesg[] = "Things should be as simple as possible,"
                  " but not simpler.";


  puts(mesg);
  fit(mesg,38);
  puts(mesg);

  return 0;
}


void fit(char *string,unsigned int size){
  if(strlen(string) > size){
    *(string + size) = '\0';
  }
}
