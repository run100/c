#include <stdio.h>

int main(void){
	char *message[] = {
		"www.baidu.com",
		"www.zhihu.com",
		"www.zzw.com"
	};
	
	int i = 0;
	for (i=0; i<3; i++) {
	   printf("%s\n", message[i]);
	}
	return 0;
}
