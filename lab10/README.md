# Problen number : 5

## Desing a stack data structure.

### Functions:

1.Empty

2.Size

3.Top

4.Push

5.Pop


###  I create head as a  global variables 

Node *head = NULL;

So, it can be easily used in any function.



### Push function: 

when the function is called it create a new node every time. 

void push(int num){ 
Node *newnode;

newnode = (Node *)malloc(sizeof(Node));  

newnode->value = num; 

newnode->next = NULL;

newnode->next = head;

head = newnode;

}



### Pop function:

void pop(){

Node *temp; 

temp = head; 

if (temp == NULL) { 

printf("It's empty .\n");                 ( if the stack is empty the program returns to main function )

return main; 

} 

else{ 

printf("pop value : %d\n",temp->value);

head = temp->next;                       ( After pop head node was replace by next node )

free(temp); 

} 

}




### Top function :

Top function is print the value of the top node on the stack  
 
void top(){ 

Node *temp;

temp = head;


 if(temp == NULL){
 
     printf("It's empty. \n");
 }
 

 printf("top element is : %d \n",temp->value);  
 

 return main;
 
}




### Size function :

size function is print the size of the stack. 


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
  


