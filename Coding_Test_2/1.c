#include<stdio.h>
#include<stdlib.h>


typedef struct node Node;
struct node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;


void display(Node *temp);
void insert_front();
void delete_back();
Node* print_reverse(Node *list);
Node* copy_list();
int search( int key) ;

int main(){
    Node *head = NULL;
    Node *list = NULL;


     int op,num,key;
    do{
        printf("\n \n ");
        printf("Options\n");
        printf("-------------- \n");
        printf("\n");
        printf("1.Insert front  \n");
        printf("2.Delete Back \n");
        printf("3.Display \n");
        printf("4.Print reverse \n");
        printf("5.Copy list\n");
        printf("6.Search \n");
        printf("7.Close  \n");

        printf("\n");
        printf("Enter your option : \n");
        scanf("%d",&op);
        system("cls");


        if(op<=0 || op >7 ){
        printf("Invalid input.Please Insert Between 1 to 7\n");
        }
        else if(op ==1){


            insert_front();


        }


        else if (op ==2){
            delete_back();;
        }
        else if(op == 3){
            display(head);
        }


        else if (op == 4){
             printf("Display List : ");
            display(head);

            head = print_reverse(head);
            printf("Display List  in Reverse: ");
            display(head);
        }
        else if(op == 5){
            list = copy_list(head);
            printf("After Copy  from List 1:\n ");
            display(list);
        }
        else if (op == 6 ){
            printf("enter the search key\n");
            scanf("%d",&key);
            search(key) ;
            }



    }while(op!=7);


}



void insert_front()
{
    Node *new_Node;
    int item;
    new_Node = (Node *) malloc(sizeof(Node));
    if(new_Node == NULL)
    {
        printf("OVERFLOW");

    }
    else
    {
        printf("Input Value to Push Front: ");
        scanf("%d",&item);

        if(head==NULL)
        {
            new_Node->next = NULL;
            new_Node->prev=NULL;
            new_Node->data=item;
            head=new_Node;
        }
        else
        {
            new_Node->data=item;
            new_Node->prev=NULL;
            new_Node->next = head;
            head->prev=new_Node;
            head=new_Node;
        }

    }

}




void delete_back()
{
    Node *new_Node=head, *prev;
    if(head == NULL)
    {
        printf("list is empty\n");

    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);

    }
    else
    {
        while(new_Node->next!=NULL)
        {
            prev=new_Node;
            new_Node=new_Node->next;
        }
        prev->next=NULL;
        free(new_Node);

    }
}
Node* print_reverse(Node *list)
{
    Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}
int search( int key)
{

     Node *temp = head;


    int count = 0, flag = 0;


    if(temp == NULL)
        return -1;
    else
    {

        while(temp->next != head)
        {

            count++;

            if(temp->data == key)
            {
                flag = 1;
                count--;
                break;
            }

            temp = temp->next;
        }

         if(temp->data == key)
        {
            count++;
            flag = 1;
        }


        if(flag == 1)
          printf("key was found\n");
        else
            printf("key was not found");
    }
}

Node* copy_list(Node *copy)
{
    if(copy == NULL)
        return NULL;
    Node *temp = (Node*) malloc(sizeof (Node));
    temp->data = copy->data;
    temp->next = copy_list(copy->next) ;

    return temp;
}

void display(Node *temp)
{
    Node *new_Node;
    printf("Doubly Linked List: ");
    new_Node = head;
    if(new_Node==NULL)
    {
        printf(" list  is Empty ");
    }
    while(new_Node != NULL)
    {
        printf("%d ",new_Node->data);
        new_Node=new_Node->next;
    }
}


