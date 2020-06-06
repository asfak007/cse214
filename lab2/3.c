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
        /* move all element right Side */
        for (i=n;i>=p;i--){
            array[i]=array[i-1];
        }


        array[p-1]=x;

        printf("\n\n");
        printf("\n\n");
        for (i=0;i<=n;i++)
        {
            printf("%d ",array[i]);
        }


    return 0;
}

