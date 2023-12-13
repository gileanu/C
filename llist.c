#include <stdio.h>
#include <stdlib.h>

#define MAX 200

typedef struct node {
    int value;
    struct node* next;
} node_t; 

void print_nodes(node_t *head)
{
    node_t *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp -> value);
        temp = temp -> next;
    }
    printf("NULL \n");
}

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result -> value = value;
    result -> next = NULL;
    return result;
}

int main()
{
    node_t *head = NULL;
    node_t *temp;

    for (int i = 0; i <= MAX; i++)
    {
        temp = create_new_node(i);
        temp -> next = head;
        head = temp;
    }

    print_nodes(head);

    return 0;
}