#include <iostream>
#define MAX_SIZE 100
using namespace std;

int top = -1;
int Stack[MAX_SIZE];
//Pushing an Element in the Stack
void Push(int x)
{
  if (top==MAX_SIZE-1)
  {
	cout << "StackOverFlow" << endl;
	return;
  }
  
	Stack[++top] = x;
 
}

void Print()
{
  cout << "Stack is :" << endl;
  for(int i=0; i<=top; i++)
  {
	cout << Stack[i] << endl;
  }
}


void Pop()
{
  if (top==-1)
  {
	cout << "No Element Present" << endl;
	return;
  }
  top--;
}
int Top()
{
  return Stack[top];
}


int main()
{
  Push(12);
  Print();
  Push(21);
  Print();

  return 0;
}
