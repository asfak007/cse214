/*  Update Kth (take input K from user) index with the value “X”
    (take input X from user). And print the whole array. Access
    the array using pointer */

#include<stdio.h>
int main()
{
    int *p;
    int i, X, K;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&K);

    scanf("%d",&X);

    p = &arr[0];

    for(i=K-1; i<size; i++){
        *(p+i)=X;
        break;
    }
    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
