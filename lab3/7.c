/* Calculate Standard Deviation of all elements of the given array */

#include<stdio.h>
#include<math.h>
int main(){
    int i;
    double sum = 0;
    double avg = 0;
    double variance ;
    int array[100] = {4, 9, 11, 12, 17, 5, 8, 12, 14, 20};
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    for(i=0; i<size; i++)
        sum += array[i];

    printf("\n%.2lf",sum); 

    avg = sum/size;

    printf("\n%.2lf",avg); 

    for(i=0; i<size; i++)
     variance += pow(array[i]-avg,2);

    variance = sqrt(variance/10);

    printf("\n%.2lf\n",variance);

    return 0;
}
