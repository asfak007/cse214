#include<stdio.h>
int main()
{
    int array [10]={1,2,3,4,5,6,7,8,9,10};

     printf("Before Update : \n");

    int i;
    for(i=0;i<10;i++){

    printf("%d ",array[i]);

    }
    array[5]=100;
    printf("\nAfter Update : \n");

    for(i=0;i<10;i++){

    printf("%d ",array[i]) ;

    }

    return 0;
}
