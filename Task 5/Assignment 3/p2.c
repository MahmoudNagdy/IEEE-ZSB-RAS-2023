#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

static Node *head = NULL;

void Add_Node_InFirst(int value){
    Node *ptr = (Node *) malloc(sizeof(Node));
    ptr->data = value;
    if(head == NULL){
        ptr->next = head;
        head = ptr;
    }
    else{
        ptr->next = head;
        head = ptr;
    }
}

void deleteNode(Node** head,int value){
    Node *ptr = *head;
    Node *prev;
    if(ptr != NULL && ptr->data == value){
        free(ptr);
    }

    while (ptr != NULL && ptr->data != value)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if(ptr == NULL){
        printf("The Value Not Found");
    }
    
    prev->next = ptr->next;

    free(ptr);
}

void printList(Node *node){
    if(node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
}

void main(){
    int data;
    Node** head = NULL;
    Node *node;
    char func;
    printf("What Do You Want!?\n");
    printf("Enter + to add node or - to delete node or p to print list: ");
    scanf("%c", &func);
    switch (func)
    {
    case '+':
        Add_Node_InFirst(data);
        break;
    case '-':
        deleteNode(head, data);
        break;
    case 'p':
        printList(node);
        break;
    default:
        break;
    }
}