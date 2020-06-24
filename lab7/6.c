#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);
void search_n(node* head,int a);
int main()
{
    node* head;
    head = NULL;
    head = create_list();
    print_list(head);
    search_n(head,10);


        return 0;
}
void search_n(node* head,int a){
     int found = 0;
while(head!=NULL){
    if(head==a){
        found =1;
        break;
    }
    head= head->next;
}
    if(found==1){
            printf("Found");
       }
    else{
        printf("NOT Found");
    }


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





