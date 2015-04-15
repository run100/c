#include <stdio.h>

int main(int argc,char *argv[]){
    printf("Input Var I\n");
    int i;
    scanf("%d",&i);
    printf("Input Var J\n");
    int j;
    scanf("%d",&j);
    if(0!=j){
        printf("%d / %d=%d \n", i,j,i/j);
    }else{
        fprintf(stderr, "J IS NOT 0\n");
        return 1;
    }
    return 0;
}
