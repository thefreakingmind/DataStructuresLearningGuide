#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

struct Node *head;

void Insert(int data, int n);
{
  Node *temp = new Node();
  temp-> data = data;
  temp -> next = NULL;
  if(n==1) // If We Will be adding it on First Node. That Mean When we want to Enter The Element in First Node, The Address will be Stored in the Head Node and Will be Linked
	//Logic: We Are Storing the Address of First Node in the Head.
  {
	temp->next = head;
	head = temp;
	return;
  }

void print();




int main()
{
  head = NULL; //Empty List
  Insert(2,1);
  Insert(3,2);
  Insert(4,3);
  Insert(5,4);

