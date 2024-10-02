#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free
#include "stack.h"

int main() {
    // Create a new stack
    stack_t myStack = create_stack();
    if (myStack == NULL) {
        printf("Failed to create stack!\n");
    }

    // Test initial state of the stack
    printf("Initial state: ");
    printf("Is stack empty? %d\n", is_stack_empty(&myStack)); // Should be 1 (true)
    printf("Is stack full? %d\n", is_stack_full(&myStack));   // Should be 0 (false)

    // Push elements onto the stack
    push_to_stack(&myStack, 10);
    push_to_stack(&myStack, 20);
    push_to_stack(&myStack, 30);

    // Check top element
    printf("Top element after pushes: %d\n", peek_stack(&myStack)); // Should be 30

    // Pop elements from the stack
    printf("Popped element: %d\n", pop_from_stack(&myStack)); // Should be 30
    printf("Popped element: %d\n", pop_from_stack(&myStack)); // Should be 20

    // Check remaining top element after pops
    printf("Top element after pops: %d\n", peek_stack(&myStack)); // Should be 10

    // Pop last element
    pop_from_stack(&myStack); // Remove last element

    // Check if the stack is empty now
    printf("Is stack empty after popping all elements? %d\n", is_stack_empty(&myStack)); // Should be 1 (true)

    // Attempt to pop from an empty stack
    int result = pop_from_stack(&myStack);
    if (result == -1) {
        printf("Stack underflow! Cannot pop from empty stack.\n"); // Expected behavior
    }

    // Attempt to peek at an empty stack
    result = peek_stack(&myStack);
    if (result == -1) {
        printf("Cannot peek at empty stack.\n"); // Expected behavior
    }

    // Fill the stack to capacity and check for overflow condition
    for (int i = 0; i < MAX_SIZE; i++) {
        push_to_stack(&myStack, i + 1); // Push numbers 1 to MAX_SIZE
    }
    
    printf("Is stack full after filling? %d\n", is_stack_full(&myStack)); // Should be 1 (true)

    // Attempt to push when the stack is full
    push_to_stack(&myStack, 101); // This should not succeed

    free(myStack); // Free allocated memory for the stack

    return 0; // Exit successfully
}