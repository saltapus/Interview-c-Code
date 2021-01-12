#include "BinaryTree.h"

int count = 0;
int lCount = 0;
int rCount = 0;
struct node* root = NULL;


int main()
{
    char x[32] = "==============================";
    struct node* root = NULL;

    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); ;

    printf("%s\n", x);
    printf("PreOrder Traversal\n");
    printf("%s\n[", x);
    preOrder();
    printf("]\n", x);

    printf("%s\n", x);
    printf("InOrder Traversal\n");
    printf("%s\n[", x);
    inOrder();
    printf("]\n", x);

    printf("%s\n", x);
    printf("PostOrder Traversal\n");
    printf("%s\n[", x);
    postOrder();
    printf("]\n", x);

    printf("\nTotal count is: %d\n left count is: %d\n right count is: %d\n", count, lCount, rCount);
    return 0;
}

struct node* newNode(int x)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->value = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}


struct node* insert(struct node* node, int value)
{
    count++;
    root = insertRec(node, value);
    return root;
}

struct node* insertRec(struct node* node, int value)
{
    if(node == NULL)
    {
        node = newNode(value);
    }
    else if (value < node->value)
    {
        node->left = insertRec(node->left, value);
        lCount++;
    }
    else if (value > node->value)
    {
        node->right = insertRec(node->right, value);
        rCount++;
    }
    return node;
}

void preOrder()
{
    recPreOrder(root);
}

void recPreOrder(struct node *node)
{
    if(node != NULL)
    {
        printf("%d, ", node->value);
        recPreOrder(node->left);
        recPreOrder(node->right);
    }
}

void inOrder()
{
    recInOrder(root);
}

void recInOrder(struct node* node) 
{ 
    if (node != NULL) { 
        recInOrder(node->left); 
        printf("%d, ", node->value);
        recInOrder(node->right); 
    } 
} 

void postOrder()
{
    recPostOrder(root);
}

void recPostOrder(struct node *node)
{
    if(node != NULL)
    {
        recPostOrder(node->left);
        recPostOrder(node->right);
        printf("%d, ", node->value);
    }
}