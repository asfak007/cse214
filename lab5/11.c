/*Find second maximum from the array.Access the array using pointer*/

#include<stdio.h>
int main(){

    int *max;
    int i, max2;
    int arr[100] = {3, 69, 68, 45, 26, 78, 52,4, 9, 71};
    int size = 10;

    max = &array[0];

    for(i=0; i<size; i++){
        printf("%d ",*(max+i));
       }
    printf("\n");

    for(i=0; i<size; i++){
    
        if(*(max+i)>*max){
        
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max2 && *(max+i)<*max){
            max2 = *(max+i);
            }
    }

    printf("%d\n", max2);

    return 0;
}
