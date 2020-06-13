#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i, max;

     printf(" Array :\n");
     for(i=0;i<5;i++){
         printf("%d ",arr[i]);
     }
     max = arr[0];

     for(i=1;i<5;i++){
         if(max<arr[i]){
             
             max=arr[i];
         }
     }
     printf("\nMinimum value : %d  ",max);

    return 0;
}
