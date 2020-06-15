/*Print entrie array each element separated space.Access the array using pointer*/
#include<stdio.h>
int main()
{
    int i;
    int *p;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &arr[0];

    for(i=0; i<size; i++){
        printf("%d ", *(p+i));
        }

    return 0;
}
