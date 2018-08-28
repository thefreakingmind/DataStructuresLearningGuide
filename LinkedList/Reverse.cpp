#include <iostream>

using namespace std;

struct Node{
  int data;
  Node *next;
};

struct Node *head;

void Reverse()
{
  struct Node *current, *prev, *next;
  temp=head;
  prev = NULL;
  while(temp!=NULL)
  {
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
  }
}

int main()
{
  //Driver Program Here
}


