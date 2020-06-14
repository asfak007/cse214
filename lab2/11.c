/* Delete a value “X” (take input X from user) from
   the array shift all other value to left. If “X”
   is not present in the given array print Element
   Not Found. Delete all the occurrence of the value.
   And print the whole array */

#include<stdio.h>
int main (){
    int arr[50] = {1, 2, 3, 4, 5, 6, 4, 7, 8, 9,10,11,12};
    int i, j, X;
    int flag=0, size=12;

    scanf("%d",&X);

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(j=0;j<=size;j++){

        if(X==arr[j]){

            for(i=j;i<=size;i++){
                arr[i] = arr[i+1];
            }
            size--;
            flag++;
            j--;
        }
    }

    if(flag==0){
        printf(" Element Not Found\n");
    }
    else{
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
