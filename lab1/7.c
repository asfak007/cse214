 /*Print  the array elements in reverse order . Each elements should be separated by space */

#include <stdio.h>
int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, i;
    
    for(i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(i = size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
