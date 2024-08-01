#include <iostream>
#include <string>


struct Node {
  int value;
   Node *next;
};

Node *head = NULL;

void push(int value){
   Node *newNode = new Node();
   newNode->value = value;
   newNode->next = head;
   head = newNode;
}

void pop(){
   if(head == NULL)
     printf("stack is empty you can't pop\n");
   else {
     Node *temp = head;
     head = head->next;
     free(temp);
   }
}

int getTop(){
  return head->value;
}

bool isEmpty(){
  return head == NULL;
}

void display(){
  Node *temp = head;
  printf("displat the stack from the top : \n");
  while(temp != NULL){
    printf("%d \n", temp->value);
    temp = temp->next;
  }
}

int main() {
  push(3);
  push(4);
  push(5);
  display();
  pop();
  pop();
  display();
  pop();
  pop();
  display();
  std::string ans = isEmpty()? "yes":"No";
  std::cout<<"is Empty : "<<ans<<std::endl;
}