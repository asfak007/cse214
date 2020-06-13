#include <stdio.h>
int main(){
    int i, j, size;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {11, 12, 13, 14, 15};
    int size1 = 10;
    int size2 = 5;

    for(i=0; i<size1; i++){
        printf("%d ",arr1[i]);
     }
    printf("\n");

    for(i=0; i<size2; i++){
        printf("%d ",arr2[i]);
        }

      size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++){
        arr1[i]=arr2[j];
        }

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",arr1[i]);
        }

    return 0;
}
