#include <stdio.h>

int main(int argc, char *argv[]){
    //printf()
    fprintf(stdout,"Please Input A Num\n");

    //scanf()
    int a;
    fscanf(stdin, "%d", &a);

    if(a<1){
        fprintf(stderr, "The num is error\n");
    }

 
    return 0;
}
