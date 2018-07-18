#include <iostream>

using namespace std;
struct Node{
  int data;
  Node *link;
};
struct Node* top = NULL;


void Push(int x)
{
  Node* temp = new Node();
  temp->data = x;
  temp->link = top;
  top = temp;
}

void Pop()
{
  struct Node *temp;
  if(top==NULL) return;
  temp = top;
  top = top->link;
  free(temp);
}


int main()
{
  Push(2);
  Push(3);
  Pop();
  return 0;
}


