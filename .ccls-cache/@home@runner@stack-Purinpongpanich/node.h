#include<stdio.h>
#include<stdlib.h>
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;
/*
void push(NodePtr* top, int x){

  NodePtr newNode = (NodePtr) malloc( sizeof( Node ) );

  if ( newNode ) { 
    newNode->data = x;
    newNode->nextPtr = *top;
    *top = newNode;
   } 
   else {
      printf( "%d not inserted. No memory available.\n", x );
   }
};

int pop(NodePtr* top){
  NodePtr temp = *top;
  if(*top){
    int value = temp->data;
    *top = temp->nextPtr;
    free(temp);
    return value;
  }
  printf("Error can't Pop\n");
  return 0;
}
*/
#endif
