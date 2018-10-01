//Coding is Love. Marry it
//Implemented Preorder, Postorder, Inorder

#include <iostream>

using namespace std;

//Creating Structure of The Tree
struct Node{
  int data;
  Node *left;
  Node *right;
};
//Tree Structure
struct Node *Newnode(int data)
{
  struct Node *node= new Node();

  //Data 
  node->data= data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void Inorder(struct Node *node)
{
  if(node==NULL)return;
  cout << node->data;
  Inorder(node->left);
  Inorder(node->right);
}

void PostOrder(struct Node *node)
{
  if(node==NULL)return;
  PostOrder(node->left);
  cout << node->data;
  PostOrder(node->right);
}
int main()
{
  struct Node *root = Newnode(1);
  root->left = Newnode(3);
  root->right = Newnode(4);
  root->left->left = Newnode(5);
  cout << "In Order" << endl;
  Inorder(root);
  cout << "Post Order" << endl;
  PostOrder(root);
  return 0;
}

