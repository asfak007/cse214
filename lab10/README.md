# Problen number : 5

## Desing a stack data structure.

### Functions:

1.Empty

2.Size

3.Top

4.Push

5.Pop




Node *head = NULL;


void push(int num){
   Node *newnode;

   newnode = (Node *)malloc(sizeof(Node));
   newnode->value = num;
   newnode->next = NULL;

   newnode->next = head;
   head = newnode;

}

void pop(){
   Node *temp;
   temp = head;
   if (temp == NULL)
   {
    printf("It's empty .\n");
    return main;
   }
   else{
   printf("pop value : %d\n",temp->value);

   head = temp->next;
   free(temp);
   }
}

void top(){
    Node *temp;
    temp = head;

     if(temp == NULL){
         printf("It's empty. \n");
     }

     printf("top element is : %d \n",temp->value);

}

int size(){

    Node *temp;
    temp = head;
      int count = 0;
      if (temp == NULL)
      {
          return 0;
      }
      else
      {
           while (temp != NULL)
      {

          count++ ;
          temp = temp->next;

      }
      return count ;
      }

}
void display(){
    Node *temp;
    temp = head;

    if(temp == NULL){
       printf("It's Empty");
    return main;

    }
    else{
        printf("The stake is : ");
        while(temp != NULL){
            printf("%d ",temp->value);
        temp = temp->next;
        }
        printf("\n");
    }
}

