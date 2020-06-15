/*Find second minimum from the array.Access the array using pointer*/
#include<stdio.h>
int main()
{
    int *min;
    int i, min2;
    int array[10] = {3, 8, 87, 489, 383, 7, 6, 253, 9, 953};
    int size = 10;

    min = &arr[0];

    for(i=0; i<size; i++){
        printf("%d ",*(min+i));
      }
      
    printf("\n");

    for(i=0; i<size; i++){
    
        if(*(min+i)<*min){
        
            min2 = *min;
            *min = *(min+i);
        }
        
        else if(*(min+i)<min2 && *(min+i)!=*min){
            min_2nd = *(min+i);
            }
    }

    printf("%d\n", min2);

    return 0;
}
