<h1 align="center">
    Problen number : 5
</h1>

<h2 align="center">
    Desing a stack data structure.
</h2>

#### [CLICK HERE For C File](../lab10/lab_mid_report_V3.c)

#### [CLICK HERE For Header File](../lab10/lab_mid_report_V3.h)


### Functions:

1.Empty

2.Size

3.Top

4.Push

5.Pop

6.Display 




## Push Function: 

```c
void push(int num)
{
   Node *newnode;

   newnode = (Node *)malloc(sizeof(Node));
   newnode->value = num;
   newnode->next = NULL;

   newnode->next = head;
   head = newnode;

}
```


## Pop Function:

```c
void pop()
{
    
   Node *temp;
   temp = head;
   if (temp == NULL)
      {
          printf("Stack is Empty.\n");

      }
   else
      {
          printf("pop value : %d\n",temp->value);
          head = temp->next;
      }
}
```



## Top Function :

```c
void top()
{
    if(head == NULL)
        {
            printf("Stack is Empty. \n");

        }

     printf("top element is : %d \n",head->value);

}
```




## Size Function :

```c
int size_of()
{

    Node *temp;
    temp = head;
    int n = 0;
    if (temp == NULL)
        {
            return 0;
        }
    else
        {
            while (temp != NULL)
            {
                n++;
                temp = temp->next;
            }
            return n;
        }
}
```

## Empty Function :
```c
void empty_stack()
{
    if(head == NULL)
        {
            printf("Stack is Empty.\n");


        }
    else
        {
            printf("Stack is not Empty");

}
}
```
## Display Function :
```c
void display()
{
    Node *temp;
    temp = head;

    if(temp == NULL)
        {
           printf("Stack is Empty.\n");

        }
    else
        {
            printf("The stake is : ");
            while(temp != NULL)
                {
                    printf("%d ",temp->value);
                    temp = temp->next;
                }

            printf("\n");
        }
}
```

