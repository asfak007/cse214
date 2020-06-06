#include<stdio.h>
int main()
{
    int array[100],n,p,i,x;

    printf("Please Enter the SIZE of array : ");
    scanf("%d",&n);
    printf("Please Enter Elements of this array : ");
    for(i=0;i<n;i++)
    {
        printf("Element : %d--",i);
        scanf("%d",&array[i]);
    }

        printf("Input Value be inserted : ");
        scanf("%d",x);

        printf("Input the position ,where the value to be inserted : ");
        scanf("%d",&p);

        for(i=0;i<n;i++)
        {
            printf("%d ",array[i]);

        }
        array[p]=x;
        printf("\n\n");
        for (i=0;i<=n;i++)
        {
            printf("%d ",array[i]);
        }


    return 0;
}
