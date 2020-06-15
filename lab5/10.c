/*Find minimum from the array.Access the array using pointer*/
#include<stdio.h>
int main(){

    int i;
    int *min;
    int arr[100] = {9, 78, 67, 85, 96, 7, 12, 2, 63, 5};
    int size = 10;

    min = &arr[0];

    for(i=0; i<size; i++){
        printf("%d ",*(min+i));
        }

    printf("\n");

    for(i=1; i<size; i++){
        if(*(min+i)<*min)
            *min = *(min+i);
            }

    printf("%d\n",*min);

    return 0;
}
