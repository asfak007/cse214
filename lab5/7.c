/*  Search a value “X” (take input X from user) in the array
    and print the location if “X” found in the array otherwise
    print -1. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *p;
    int i, X, locat;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int tag = 0;

    scanf("%d",&X);

    p = &arr[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            locat = i;
            tag++;
        }
    }

    if(tag==1)
        printf("%d",locat);
    else
        printf("-1");

    return 0;
}
