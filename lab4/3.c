/*Reverse the given array  within the same array*/
#include <stdio.h>
int main(){


    int i, j, temp;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=size-1, j=0; j<i; i--, j++){
        temp = arr[j];
        array[j] = arr[i];
        array[i] = temp;
    }

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
     }
    return 0;
}
