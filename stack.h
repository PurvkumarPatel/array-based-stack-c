#ifndef STACK_H
#define STACK_H

// Define the maximum size of the stack
#define MAX_SIZE 100 

// Define the stack structure
typedef struct _stack {
    int top;            // Index of the top element in the stack
    int items[MAX_SIZE]; // Array to hold the stack elements
} *stack_t;              // Define stack_t as a pointer to the stack structure

// Function declarations for stack operations

/**
 * Creates a new stack and returns a pointer to it.
 * @return A pointer to the newly created stack.
 */
stack_t create_stack();

/**
 * Initializes the stack by setting the top index to -1.
 * @param s A pointer to the stack to be initialized.
 */
void initialize_stack(stack_t* s);

/**
 * Checks if the stack is full.
 * @param s A pointer to the stack being checked.
 * @return 1 if full, 0 otherwise.
 */
int is_stack_full(stack_t* s);

/**
 * Checks if the stack is empty.
 * @param s A pointer to the stack being checked.
 * @return 1 if empty, 0 otherwise.
 */
int is_stack_empty(stack_t* s);

/**
 * Pushes an item onto the stack.
 * @param s A pointer to the stack where the item will be pushed.
 * @param item The integer item to be pushed onto the stack.
 */
void push_to_stack(stack_t* s, int item);

/**
 * Pops an item from the stack and returns it.
 * @param s A pointer to the stack from which an item will be popped.
 * @return The integer item popped from the stack, or -1 if underflow occurs.
 */
int pop_from_stack(stack_t* s);

/**
 * Peeks at the top item of the stack without removing it.
 * @param s A pointer to the stack being peeked at.
 * @return The integer item at the top of the stack, or -1 if empty.
 */
int peek_stack(stack_t* s);

#endif // STACK_H