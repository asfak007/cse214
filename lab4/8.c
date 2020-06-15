/*Cyclically permute the elements of an array*/
#include <stdio.h>
int main(){
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    for (i=0; i<size; i++){
        printf("%d ",arr[i]);
        }

    printf("\n");

    arr[size] = arr[0];

    for (i=0; i<size; i++){
        arr[i] = arr[i+1];
        }

    for (i = 0; i<size; i++){
        printf ("%d ", arr[i]);
        }

    return 0;
}
