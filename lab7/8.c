#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);

node *reverse_recursive(node* head);

int main()
{
    node* head;

    head = NULL;
    head =(node*) malloc(sizeof(node));
    head = create_list();
    printf("Before reverse the List : ");
    print_list(head);
    head = reverse_recursive(head);
    printf("After reverse the List : ");
    print_list(head);

        return 0;
}
node *reverse_recursive(node* head){

    if(head == NULL){

        return head;
    }

    node* previous_node = head;
    node* current_node = head->next;

    node* new_node = reverse_recursive(head->next);

    current_node->next = previous_node;
    previous_node->next = NULL;
    return new_node;

}
node* create_list()
{

    node *a,*b,*c;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));

    a->data=12;
    a->next=b;

    b->data=14;
    b->next=c;

    c->data=15;
    c->next=NULL;

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




