#include<stdio.h>
int main()
{

    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int i,x,Found=0;
    printf("Please input your value,i will find this value : \n");
    scanf("%d",&x);

    for(i=0;i<5;i++)
    {
        if(array[i] == x){

            Found=1;
            break;



        }

    }

     if(Found==1){
        printf("%d is founded index %d",x,i);
     }
     else{
        printf("-1");
     }

    return 0;
}

