#include<stdio.h>
int main()

{
    int array[5]={1,2,3,4,5};

    printf("Before update : \n");
    int i,x,p;
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);

    }
    printf("\nplease Enter the position ,where you update(0-4) :\n");
    scanf("%d",&p);
    printf("\nplease Enter your new value :\n");
    scanf("%d",&x);

    array[p]=x;

    printf("\nAfter Update: \n");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }




    return 0;
}
