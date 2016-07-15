#include <stdio.h>
#include "List.c"

void createList(int data[],int len);
void display();

void main()
{
	int data[10]={10,20,30,40,50,60,70,80,90,100};
	createList(data,10);
	display();
}
