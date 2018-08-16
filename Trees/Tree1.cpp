/* Tree Project 1 */
#include <iostream>

using namespace std;

struct Node{
  struct node *left, *right;
  int key;
};

struct Node *newnode(int key)
{
  node *temp = new node;
  temp->key = key;
  temp->left = temp->right = NULL;
  return temp;
}

void PrintSingles(struct Node *root)
{
  if(root==NULL)
  {
	return;
  }
  if(root->left!=NULL && root->right!=NULL)
  {
	PrintSingles(root->left);
	PrintSingles(root->right);
  }

