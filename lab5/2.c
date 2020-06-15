/*Scan values from user into an array until end of file.Acccess the array using pointer*/
#include<stdio.h>
int main(){

    int *p;
    int i;
    int arr[100];
    int size = 0;

    p = &arr[0];

    for(i=0; scanf("%d",(p+i))!=EOF; i++){
        size++;
        }

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
        }

    return 0;
}
