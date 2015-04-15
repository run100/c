#include <stdio.h>
//#include "max.c"
//#include "max.o"
#include "max.h"
#include "min.h"


int main(){
    int n1=25;
    int n2=99;

    int max = max_num(n1, n2);
    printf("The Max Value Is %d\n", max);
    printf("The Min Value Is %d\n", min_num(n1,n2));

    return 0;
}
