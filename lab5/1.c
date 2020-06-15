/*Scan N(take input N from user)values from user into an array.Access the array using Pointer*/
#include<stdio.h>
int main(){

    int *p;
    int i, n;
    int arr[100];

    p = &arr[0];

    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",(p+i));

    printf("\n");

    for(i=0; i<n; i++)
        printf("%d ",*(p+i));

    return 0;
}
