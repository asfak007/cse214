#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);
node *copy_list(node *list);
int main()
{
    node *head,*head2;
    head = NULL;
    head2= NULL;
    head = create_list();
    print_list(head);
    head2 = copy_list(head);
    print_list(head2);



        return 0;
}
node *copy_list(node *list){

    if(list == NULL){

        return NULL;
    }
    node *temp =(node*) malloc(sizeof(node));
    temp->data = list->data;
    temp->next = copy_list(list->next);
    return temp;

}

node* create_list()
{

    node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->data=12;
    a->next=b;

    b->data=14;
    b->next=c;

    c->data=15;
    c->next=d;

    d->data=18;
    d->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->data);
    temp = temp->next;
 }

}








