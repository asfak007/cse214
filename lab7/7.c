#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);
node *reverse_list(node *list);
int main()
{
    node *head,*r;
    head = NULL;
    head = create_list();
    print_list(head);
    r = reverse_list(head);
    print_list(r);


        return 0;
}
node *reverse_list(node *list){

    node *first,*current,*temp;

    first = list;
    current = list->next;
    first->next = NULL;

    while(current){
        temp = current->next;
        current->next= first;
        current = temp;
    }
    return first;
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






