#include <stdlib.h> // For malloc and free
#include "stack.h"

// Create a new stack and return a pointer to it
stack_t create_stack() {
    stack_t s = (stack_t)malloc(sizeof(struct _stack)); // Allocate memory for the stack
    if (s != NULL) {
        initialize_stack(&s); // Initialize the stack
    }
    return s; // Return the pointer to the newly created stack
}

// Initialize the stack
void initialize_stack(stack_t* s) {
    (*s)->top = -1; // Stack is initially empty
}

// Check if the stack is full
int is_stack_full(stack_t* s) {
    return (*s)->top == MAX_SIZE - 1; // Returns true if full
}

// Check if the stack is empty
int is_stack_empty(stack_t* s) {
    return (*s)->top == -1; // Returns true if empty
}

// Push an item onto the stack
void push_to_stack(stack_t* s, int item) {
    if (is_stack_full(s)) {
        return; // Handle overflow condition silently
    }
    (*s)->items[++(*s)->top] = item; // Increment top and add item
}

// Pop an item from the stack
int pop_from_stack(stack_t* s) {
    if (is_stack_empty(s)) {
        return -1; // Return -1 to indicate underflow silently
    }
    return (*s)->items[(*s)->top--]; // Return top item and decrement top
}

// Peek at the top item of the stack without removing it
int peek_stack(stack_t* s) {
    if (is_stack_empty(s)) {
        return -1; // Return -1 to indicate empty silently
    }
    return (*s)->items[(*s)->top]; // Return top item without removing it
}