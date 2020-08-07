#include<stdio.h>
#include<stdlib.h>


typedef struct node Node;

struct node{
int data;
Node *next;

};

void display(Node *head);
void empty(Node *head);
void push_front(Node *head,int value);
void pop_front(Node *head);
int size( Node* head);

int main(){
    Node *head;
    head = NULL;
     int op,num;
    do{
        printf("\n \n ");
        printf("Options\n");
        printf("-------------- \n");
        printf("\n");
        printf("1.Push front  \n");
        printf("2.Pop front \n");
        printf("3.Display \n");
        printf("4.Size \n");
        printf("5.Empty\n");
        printf("6.Clear \n");
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
                                push_front(head,num);


                }


                        else if (op ==2){
                                pop_front(head);
                        }
                        else if(op == 3){
                          display(head);
                        }


                        else if (op == 4){
                                printf("size is : %d \n",size(head));
                        }
                        else if(op == 5){
                            empty(head);
                        }
                        else if (op == 7 ){
                                clear(head);
                        }



    }while(op!=7);


}

void display(Node *head)
{
    Node *temp;
    temp = head;

    if(temp == NULL)
        {
           printf("list is Empty.\n");

        }
    else
        {
            printf("The list is : ");
            while(temp != NULL)
                {
                    printf("%d ",temp->data);
                    temp = temp->next;
                }

            printf("\n");
        }
}

  void push_front(Node *head,int value)
{
    Node *newNode;
    newNode = ( Node*)malloc(sizeof( Node));
    newNode -> data = value;
    if(head == NULL)
    {
       head = newNode;
       newNode -> next = head;
    }
    else
    {
        Node *temp = head;
       while(temp -> next != head)
          temp = temp -> next;
       newNode -> next = head;
       head = newNode;
       temp -> next = head;
    }

}

void pop_front(Node *head)
{
   if(head == NULL)
      printf("List is Empty");
   else
   {
      Node *temp = head;

         head = temp -> next;
         head -> next = NULL;
         free(temp);


   }
}

int size( Node* head)
{
     Node* temp = head;
    int result = 0;
    if (head != NULL) {
        do {
            temp = temp->next;
            result++;
        } while (temp != head);
    }

    return result;
}
void clear(Node *head)
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }


}


void empty(Node *head)
{
    if(head == NULL)
        {
            printf(" list is Empty.\n");


        }
    else
        {
            printf(" list is not Empty");

}
}


