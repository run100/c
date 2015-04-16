#include <stdio.h>
#define SIZE 4

void add_to(double *ar, int n, double val);

int main(int argc, char *argv[])
{


  //const double arr1[SIZE] = {4,5,6,7};
  //arr1[1] = 10;

  double arr[ SIZE ] = {31,28,31,30};
  add_to(arr, SIZE, 2.5);
  int j;
  for(j=0;j<SIZE;j++){
    printf("%f\n",arr[j]);
  }

  return 0;
}

void add_to(double *ar,int n, double val){
  int i;
  for(i=0;i<n;i++){
    //*(ar+i) += val;
    ar[i] += val;
  }
}
