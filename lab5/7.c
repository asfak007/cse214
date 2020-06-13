#include<stdio.h>
int main()
{
    int *p;
    int i, n, loc;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int temp = 0;

    scanf("%d",&n);

    p = &arr[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==n)
        {
            loc = i;
            temp++;
        }
    }

    if(tag==1)
        printf("%d",loc);
    else
        printf("-1");

    return 0;
}
