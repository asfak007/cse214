/*Reverse the given array and store it in another array*/
#include<stdio.h>
int main(){


    int i;
    int temp = 0;
    int arr1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int size = 10;

    for(i=0; i<size; i++){
        printf("%d ",arr1[i]);
     }
    printf("\n");

    for(i=0; i<=size; i++){
        temp = arr1[size-i];
        array2[i-1] = temp;
    }

    for(i=0; i<size; i++){
        printf("%d ",arr2[i]);
     }
    return 0;
}
