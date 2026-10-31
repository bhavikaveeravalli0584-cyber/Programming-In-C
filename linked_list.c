#include <stdio.h>
#include <stdlib.h>

// 1. Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 2. Functions (Logic - Main kante mundu rayali)
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Node with value %d deleted.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", value);
}

void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList(Node** head) {
    Node* current = *head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    *head = NULL;
    printf("Memory cleared successfully.\n");
}

// 3. Main Function (Idhi andariki chivaralo undali)
int main() {
    Node* head = NULL;

    printf("--- Dynamic Linked List Demo ---\n");
    
    // Insert operations
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd: ;
    insertAtEnd(&head, 30);
    displayList(head);

    // Delete operation
    deleteNode(&head, 20);
    displayList(head);

    // Memory cleanup
    freeList(&head);

    return 0;
}