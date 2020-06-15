/*Copy the given array into another array.Access the using pointer*/
#include<stdio.h>
int main(){

    int i;
    int *p, *q;
    int temp = 0;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int size = 10;

    p = &arr1[0];
    q = &arr2[0];

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");

    for(i=0; i<size; i++){
        temp = *(p+i);
        *(q+i) = temp;
    }

    for(i=0; i<size; i++){
        printf("%d ",*(q+i));
     }
    return 0;
}
