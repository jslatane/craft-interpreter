#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *createNode(int new_data) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

/*
The book challenges us to create a doubly linked list of heap-allocated strings
Write functions to insert, find, and delete items from it. Test them.

The textbook also notes that you should be comfortable with C, and if not, to
pick up an introductory book on C and chew through it. I plan to do that with
"C Programming: A Modern Approach 2nd ed" and then come back here.
*/



int main() {

}