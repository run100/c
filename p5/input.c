#include <stdio.h>

int main(int argc,char *argv[]){
    
    int i;
    int s=0;
    int count=0;
    int flag = 1;
    while(flag){
        scanf("%d", &i);
        if(i == 0){
            break;
        }
        count++;
        s+=i;
    }

    printf("%d,%d", s,count);
}
