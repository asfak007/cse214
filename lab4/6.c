#include <stdio.h>
int main(){
    int i, j, size, temp;
    int arr1[10] = {9, 22, 181, 539, 141, 74, 50, 72, 14, 54};
    int arr2[10] = {101, 535, 24, 53, 98, 73, 88, 4, 56, 49};
    int size1 = 10;
    int size2 = 10;

    for(i=0; i<size1; i++){
        printf("%d ",arr1[i]);
        }

    printf("\n");

    for(i=0; i<size2; i++){
        printf("%d ",arr2[i]);
      }

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++){
        size1++;
        array1[i]=arr2[j];

    }

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",arr1[i]);
        }

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array1[i]>array1[j])
            {
                tag = array1[i];
                array1[i] = array1[j];
                array1[j] = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",array1[i]);

    printf("\n");

    return 0;
}
