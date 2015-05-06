#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	int ret;
	char *string;
	int digit;
	char buf1[255];
	char buf2[255];

	/* 最简单的用法 */
	string = "china beijin 123";
	ret = sscanf(string, "%s %s %d", buf1, buf2, &digit);
	printf("1.string=%s\n", string);
	printf("2.ret=%d,buf1=%s,buf2=%s,digit=%d\n\n",ret,buf1,buf2,digit);
	
	
	string = "123/456";
	sscanf(string, "%[^/]", buf1);
	printf("3.string=%s\n",string);
	printf("4.buf1=%s\n",buf1);


	string = "123456789";
	sscanf(string, "%5s", buf1);
	printf("5.string=%s\n", string);
	printf("6.buf1=%s\n", buf1);
    return 0;
}
