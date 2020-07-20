#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int value;
    Node *next;
};

void pop();
void top();
void push(int num);
int size();
void display();

Node *head = NULL;

int main(){

    int op , num , n ;


    while(1){
        printf("\n \n ");
        printf("Options\n");
        printf("-------------- \n");
        printf("\n");
        printf("1.Push  \n");
        printf("2.Pop  \n");
        printf("3.Display \n");
        printf("4.Top \n");
        printf("5.Size \n");
        printf("6.Close  \n");
        printf("\n");
        printf("Enter your option : \n");
        scanf("%d",&op);
        system("cls");
     if(op<=0 || op >6 ){
        printf("Invalid input");
     }
                else if(op ==1){

                                printf("Enter the data to insert:\n");
                                scanf("%d", &num);
                                push(num);


                }


                        else if (op ==2){
                                pop();
                        }
                        else if(op == 3){
                        display();
                        }

                        else if (op ==4 ){
                                top();
                        }

                        else if (op == 5){
                                printf("size is : %d \n",size());
                        }



                        else{
                                exit(0);

                        }
        }

        return 0;
  }


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
  
   }
}

void top(){

     if(head == NULL){
         printf("It's empty. \n");
         return main;
     }

     printf("top element is : %d \n",head->value);

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
