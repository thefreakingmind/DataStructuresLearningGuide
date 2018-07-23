#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

struct Node *head;

void Insert(int x)
{
  struct Node *temp = new Node;
  temp->data = x;
  temp->next = head;
  head = temp;
}

void Delete(int x)
{
  Node *temp1 = head;
  if(x==1)
  {
	head = temp1->next;
	delete temp1;
	return ;
  }
  for(int i=0; i<x-1; i++)
  {
	temp1= temp1->next;
  }
  Node *temp2 = temp1->next;
  temp1->next = temp2->next;
  delete temp2;
  return;
}

void Print()
{
  Node *temp = head;
  while(temp!=NULL)
  {
	cout << temp->data << " ";
	temp = temp->next;
  }
}

int main()
{
  	head = NULL;
	Insert(2);
	Insert(5);
	Insert(8);
	Print();
	cout << "After Deleting" << endl;
	Delete(2);
	Print();
}

	

