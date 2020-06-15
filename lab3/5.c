/*Calculate the summation of all elements of given array*/
#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    int i,sum=0;
    printf("Given Array : ");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }

    for(i=0;i<5;i++){
        sum = sum+array[i];
    }

    printf("\nSummation Of this Array Is : %d",sum);
    return 0;
}
