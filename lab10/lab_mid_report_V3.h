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
int  size_of();
void display();
void main_menu();
void empty_stack();

Node *head = NULL;

void main_menu()
{
    int op,num;
    do{
        printf("\n \n ");
        printf("Options\n");
        printf("-------------- \n");
        printf("\n");
        printf("1.Push  \n");
        printf("2.Pop  \n");
        printf("3.Display \n");
        printf("4.Top \n");
        printf("5.Size \n");
        printf("6.Empty\n");
        printf("7.Close  \n");
        printf("\n");
        printf("Enter your option : \n");
        scanf("%d",&op);
        system("cls");


        if(op<=0 || op >7 ){
        printf("Invalid input.Please Insert Between 1 to 7\n");
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
                                printf("size is : %d \n",size_of());
                        }
                        else if(op == 6){
                            empty_stack();
                        }


    }while(op!=7);
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
          printf("Stack is Empty.\n");

      }
   else
      {
          printf("pop value : %d\n",temp->value);
          head = temp->next;
      }
}

void top()
{
    if(head == NULL)
        {
            printf("Stack is Empty. \n");

        }

     printf("top element is : %d \n",head->value);

}

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
