#include <stdio.h>
#include <stdlib.h>

// Define a structure for the linked list node
struct node 
{
    int data;
    struct node *next;
};

int main()
{
    // Declare and initialize pointers to nodes
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    
    // Allocate memory for each node
    a = (struct node *) malloc(sizeof(struct node));
    b = (struct node *) malloc(sizeof(struct node));
    c = (struct node *) malloc(sizeof(struct node));
    
    // Assign values to each node
    a->data = 10;
    b->data = 20;
    c->data = 30;
    
    // Link the nodes together to form a list
    a->next = b;
    b->next = c;
    c->next = NULL;
    
    // Traverse the linked list and print each node's data
    while(a != NULL)
    {
        printf("%d -> ", a->data);
        a = a->next;
    }
    
    return 0;
}
