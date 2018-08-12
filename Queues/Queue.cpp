#include <iostream>

using namespace std;

struct Node{
  int key;
  Node *next;
};

struct Queue{
  Node *front;
  Node *rear;
};

struct Node *newnode(int m)
{
  struct Node *temp = new Node;
  temp->key = m;
  temp->next = NULL;
  return temp;
}

struct Queue *createQueue()
{
  struct Queue *q = new Node;
  q->front = q->rear = NULL;
  return q;
}


