#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);

int main(){

    node* head;
    head = NULL;
    head = create_list();

    print_list(head);



        return 0;
}


node* create_list(){

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

    printf("%d",head->data);
    if(head==NULL){
        return;
    }
    print_List(head->next);

}



