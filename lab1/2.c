/*Scan value from user into an array until end of file*/

#include<stdio.h>
int main()
{
    int arr[100];
    int i = 0;
    while(scanf("%d",&arr[i]) != EOF)
    {
        i++;
        if(i+1>100)
        {
            printf("Overflow");
            break;
        }
    }
    return 0;
}
