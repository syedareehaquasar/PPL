// Iterative C program to reverse a linked list
#include <stdio.h>
#include <stdlib.h>
/* Link list node */
struct Node
{
    int data;
    struct Node *next;
};
/* Function to reverse the linked list */
void recursiveReverse(struct Node *head, struct Node **headRef)
{
    struct Node *first;
    struct Node *rest;
    // empty list base case
    if (head == NULL)
        return;
    first = head;       // suppose first = {1, 2, 3}
    rest = first->next; // rest = {2, 3}
    // base case: List has only one node
    if (rest == NULL)
    {
        // fix the head pointer here
        *headRef = first;
        return;
    }
    // Recursively reverse the smaller {2, 3} case
    // after: rest = {3, 2}
    recursiveReverse(rest, headRef);
    // put the first elem on the end of the list
    rest->next = first;
    first->next = NULL; // (tricky step -- make a drawing)
}
void reverse(struct Node **head_ref)
{
    struct Node *prev = NULL;
    struct Node *current = *head_ref;
    struct Node *next = NULL;
    printf("\n\nReversing Linked List Ittereatively...\n");
    while (current != NULL)
    {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
/* Function to push a node */
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node =
        (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
/* Function to print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    printf("Syeda Reeha Quasar 14114802719 \n");
    /* Start with the empty list */
    struct Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);
    printf("Given linked list\n");
    printList(head);
    // reverse(&head);
    printf("\n\nReversing LinkedList Recursivly....\n");
    recursiveReverse(head, &head);
    printf("\nReversed Linked list \n");
    printList(head);
    getchar();
}
