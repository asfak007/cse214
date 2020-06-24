#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);
int size_of(node* list);
int main()
{
    node* head;
    head = NULL;
    head = create_list();
    print_list(head);
    printf("\nSize of this linked list : %d",size_of(head));


        return 0;
}

int size_of(node* list){

    int count = 0;
    while(list!=NULL){
        count++;
        list = list->next;
    }
        return count;
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




