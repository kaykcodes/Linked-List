#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *next; //a pointer which will contain the address to next node
};

struct NODE *HEAD;

void createList(int data[], int len)//the array will be passed by the user
{
  //First, creating a pointer which will act like the HEAD (or starting point) of the node
  HEAD=(struct NODE*)malloc(sizeof(struct NODE));
  HEAD->next=NULL;
  
  //int len=sizeof(data); //"len" stores no. of elements in data i.e. no. of nodes to be created
  //the above line was discarded due to my incomplete understanding of the sizeof() function 
  
  struct NODE *ptr=HEAD;
  int x;
  for(x=0;x<len;x++)
  {
    //creating a node
    struct NODE *node=(struct NODE*)malloc(sizeof(struct NODE)); //"node" is a pointer to the node
    
    //initializing the data in it
    node->data=data[x];
    node->next=NULL; //just a formality
    
    ptr->next=node; //creating the link from the previous node to the current node
    ptr=node;//updating the "ptr" to the current node (for next iteration)
  }//linked list created (I hope "HEAD" can be accessed later from other files (programs))
}

void display()//to diplay the "data" of all the nodes in the list in sequence
{
  struct NODE *ptr=HEAD->next;
  
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
