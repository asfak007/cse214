#include <stdio.h>
int main(){

    int arr[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, i;
    
    for(i = 0; i<size; i++)
    {
        printf("%d", array[i]);
        if(i<=size-2)
        {
            printf(", ");
        }
    }
    return 0;
}
