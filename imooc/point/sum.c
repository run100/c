#include <stdio.h>

int func () {
   long sum = 0, i;
   for ( i=0; i<=100; i++ ) {
	  sum += i;
   }
   return sum;
}

int main(){
	int i = 0;
	long result = 0;

	for ( i=0; i<=100; i++ ) {
	   result += i;
	}

	printf("result[1-100] = %d \n", result);
	printf("func[1-100] = %d \n", func(250));
    return 0;
}
