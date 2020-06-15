/*Declare another array with ten (10) values and compare both array whether they are same or not*/

#include <stdio.h>
int main()
{
    int i;
    int count = 0;
    
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {1, 2, 536, 4, 5, 24, 78, 8, 9, 10};
    int size = 10;

    for(i=0; i<size; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ",arr2[i]);
     }
    for(i=0; i<size; i++){
        if(arr1[i]==arr2[i])
            same++;
    }

    if(count==size){
        printf("\n\nTwo array are same\n");
        }
    else{
        printf("\n\nTwo array are not same\n");
      }
    return 0;
}
