/*Calculate the summation of all elements of the given array.Access the array using pointer*/
#include<stdio.h>
int main(){

    int i;
    int *p;
    int sum = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array[0];

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
        }

    printf("\n");

    for(i=0; i<size; i++){
        sum += *(p+i);
        }

    printf("%d\n", sum);

    return 0;
}
