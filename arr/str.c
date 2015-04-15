#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "我爱imooc网";
    char s2[] = "我";
    printf("%s\n",s1);
    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s2));

    char s3[10] = "hello";
    char s4[] = "world";

    strcat(s3, s4);
    printf("%s\n",s3);
    return 0;
}
