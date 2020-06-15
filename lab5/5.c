/*Insert a value x(take input X from user)in array at kth (take input K from user)index and shift all other value to right.
And print the whole array.Access the array using ponter.*/

#include<stdio.h>
int main()
{
    int *p;
    int i, x, k;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&x);

    scanf("%d",&k);

    p = &arr[0];

    for (i=size; i>=k; i--){
        *(p+i) = *(p+i-1);

    size++;
    }
    *(p+K-1) = x;

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ", *(p+i));
        }

    return 0;
}
