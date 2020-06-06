 #include<stdio.h>
 int main()
 {
     int array[11]={1,2,3,4,5,6,7,8,9,10,11};

     printf("Original Array : \n");

     int i;
     for(i=0;i<11;i++)
        {
          printf("%d ",array[i]);
        }
        array[10] = 123 ;

     printf("\nAfter INSERT value: \n ");
     for(i=0;i<11;i++)
        {
          printf("%d ",array[i]);
        }

     return 0 ;
 }
