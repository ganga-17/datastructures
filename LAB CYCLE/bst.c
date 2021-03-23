#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root) {
  if (root != NULL) {

    inorder(root->left);
    printf("%d -> ", root->key);

    inorder(root->right);
  }
}

struct node *insert(struct node *node, int key) {
 
  if (node == NULL) return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;

  
  while (current && current->left != NULL)
    current = current->left;

  return current;
}


struct node *deleteNode(struct node *root, int key) {
 
  if (root == NULL) return root;

  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
  
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = minValueNode(root->right);

    root->key = temp->key;

    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main() 
{
int a,b,c,d,e,f,g,h,i,item;
printf("enter the keys:");
scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
  struct node *root = NULL;
  root = insert(root, a);
  root = insert(root, b);
  root = insert(root, c);
  root = insert(root, d);
  root = insert(root, e);
  root = insert(root, f);
  root = insert(root, g);
  root = insert(root, h);
  root = insert(root, i);
  printf("Inorder traversal: ");
  inorder(root);
  printf("enter the key to be deleted:");
  scanf("%d",&item);
  printf("\nAfter deleting \n");
  root = deleteNode(root, item);
  printf("Inorder traversal: ");
  inorder(root);
}
