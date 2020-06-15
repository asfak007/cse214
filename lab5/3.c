/*Scan values from user into an array until user input 0[zero].Acccess the array using pointer*/
#include<stdio.h>
int main(){

    int *p;
    int i, size;
    int ar[100];

    p = &ar[0];

    for(i=0; scanf("%d",(p+i))!=EOF; i++)
        if(*(p+i)==0)
            break;

    size=i;

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
    }
    return 0;
}
