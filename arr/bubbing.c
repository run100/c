#include <stdio.h>

int main(){
    
    int arr[] = {22,100,87,45,90,69,72,32,88,99};
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    for(i=9;i>=0;i--){ // 对比多少个数
        for(j=0;j<=i;j++){ // 单次把循环里大数一步一步向后移
            if(arr[j] > arr[j+1] ){
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    printf("%s\n","排序之后");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
