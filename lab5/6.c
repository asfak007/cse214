#include<stdio.h>
int main()
{
    int *p;
    int i, n, m;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&m);

    scanf("%d",&n);

    p = &arr[0];

    for(i=m-1; i<size; i++){
        *(p+i)=n;
        break;
    }
    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ", *(p+i));
     }
    return 0;
}
