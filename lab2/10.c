#include<stdio.h>
int main (){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, X;
    int flag=0, size=10;

    scanf("%d",&X);

    for(i=0; i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\n");

    for(j=0;j<size;j++){

        if(X==arr[j]){

            for(i=X-1;i<=size;i++){
                arr[i] = arr[i+1];
            }
            flag++;
        }
    }

    size--;

    if(flag!=1)
    {
        printf("element Not Found\n");
    }
    else
    {
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }


    return 0;
}
