/*Calculate first 92 Fibonacci number and store those in an array*/
#include<stdio.h>
int main(){
    int i, n,array[100];

    printf("How many Fibonacci numbers : ");
    scanf("%d",&n);

    array[0]=0;
    array[1]=1;

    for(i=2;i<n;i++){
           array[i]=array[i-1] +array[i-2];

        }

    for(i=0;i<n;i++){
        printf("%d\n ",array[i]);
    }

     return 0;
}
