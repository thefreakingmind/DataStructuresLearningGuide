#include <iostream>

using namespace std;

struct Node{
  int data;
  Node *next;
};
void print(Node *n)
{
  while(n!=NULL)
  {
	cout << n->data << endl;
	n = n->next;
  }
}
int main()
{
  Node *head = NULL;
  Node *second = NULL;
  Node *third = NULL;

  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 2;
  head -> next = second;

  second -> data = 3;
  second -> next = third;

  third -> data = 4;
  third -> next = NULL;
  print(head);

  return 0;
}
