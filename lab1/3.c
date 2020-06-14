/*Scan value from user into an array until user is 0*/

#include<stdio.h>
int main(){
    int arr[100];
    int i = 0;
    while(scanf("%d",&array[i]) != EOF)
    {
        if(0 == arr[i])
        {
            break;
        }
        if(i>100)
        {
            printf("Overflow");
            break;
        }
        else{
           i++;
        }
    }
    return 0;
}
