
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;           
    struct node * next; 
} node_t;

typedef struct list {
    node_t* head;      
    unsigned int size;
} list_t;


int main(void)
{     
   node_t* current = head;
   node_t* newList = NULL;
   node_t* tail = NULL;
   
   while (current != NULL) 
   {
      if (newList == NULL)
      { 
         newList = malloc(sizeof(node_t));
         newList->data = current->data;
         newList->next = NULL;
         tail = newList;
      }
      else 
      {
         tail->next = malloc(sizeof(node_t));
         tail = tail->next;
         tail->data = current->data;
         tail->next = NULL;
      }
      current = current->next;
   }
   return(newList);
}
