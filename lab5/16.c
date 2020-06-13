#include <stdio.h>
int main(){

    int i;
    int *p, *q;
    int equal = 0;
    int arr1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &arr1[0];
    q = &arr2[0];

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
     }
    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",*(q+i));
     }
    for(i=0; i<size; i++){
        if(*(p+i)==*(q+i))
            same++;
     }
    if(equal==size){
        printf("Two array are same\n");
        }
    else{
        printf("Two array are not same\n");
     }
    return 0;
}
