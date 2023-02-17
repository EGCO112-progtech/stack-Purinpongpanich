
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char value){
  NodePtr newNode = (NodePtr) malloc( sizeof( Node ) );

  if ( newNode ) { 
    newNode->data = value;
    newNode->nextPtr = s->top;
    s->top = newNode;
    s->size++;
  }
};

int pop(StackPtr s){
  NodePtr temp = s->top;
  if(s->size>0){
    int value = temp->data;
    s->top = temp->nextPtr;
    free(temp);
    s->size--;
    //printf("pop : %c\n",value);
    return value;
  }
  //printf("Empty Stack\n");
  return 0;
}

void pop_all(StackPtr s){
  while(s->size>0){
    pop(s);
  }
}