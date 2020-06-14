/*Scan N (take input N from user) value from user into an array*/
#include<stdio.h>
int main()
{
    int i, j,N;
    int arr[100];
    scanf("%d",&N);
    if(n>100)
    {
        printf("Overflow");
    }
    else
    {
        for(j = 0; j<N; j++)
        {
            scanf("%d",&arr[j]);
        }
    }
    return 0;
}
