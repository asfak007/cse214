/*Scan  values from user into an array*/

#include<stdio.h>
int main()
{
    int i, j;
    int arr[100];
    scanf("%d",&n);
    if(n>100)
    {
        printf("Overflow");
    }
    else
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
    }
    return 0;
}
