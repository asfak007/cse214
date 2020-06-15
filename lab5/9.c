/* Find Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main(){

    int i;
    int *max;
    int arr[10] = {7, 0, 9, 74, 39, 1, 70, 2, 66, 5};
    int size = 10;

    max = &array[0];

    for(i=0; i<size; i++){
        printf("%d ", *(max+i));
     }
    printf("\n");

    for(i=1; i<size; i++){
        if(*(max+i)>*max)
            *max = *(max+i);
            }

    printf("%d\n",*max);

    return 0;
}
