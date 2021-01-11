#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    int value; 
    struct node *left; 
    struct node *right; 
}Node;

int main();
struct node* insert(Node*, int);
struct node* insertRec(Node*, int);
void preOrder();
void recPreOrder(Node*);
void inOrder();
void recInOrder(Node*);
void postOrder();
void recPostOrder(Node*);

struct node* newNode(int);
