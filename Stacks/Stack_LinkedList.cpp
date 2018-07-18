#include <iostream>

using namespace std;
//Defining a Node
struct Node{
  int data;
  Node *link;
};

//Defining the Top of The Stack
struct Node* top = NULL;

//Push Function
void Push(int x)
{
  Node* temp = new Node();
  temp->data = x;
  temp->link = top;
  top = temp;
}
//Pop Function
void Pop()
{
  struct Node *temp;
  if(top==NULL) return;
  temp = top;
  top = top->link;
  free(temp);
}

//Driver Program
int main()
{
  Push(2);
  Push(3);
  Pop();
  return 0;
}


