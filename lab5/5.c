#include<stdio.h>
int main()
{
    int *p;
    int i, n, m;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&n);

    scanf("%d",&m);

    p = &arr[0];

    for (i=size; i>=m; i--){
        *(p+i) = *(p+i-1);

    size++;
    }
    *(p+K-1) = n;

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ", *(p+i));
        }

    return 0;
}
