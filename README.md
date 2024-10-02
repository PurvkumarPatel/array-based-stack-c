# array-based-stack-c
This repository contains a simple implementation of a stack data structure using an array in C. The stack supports basic operations such as push, pop, peek, and checks for full and empty conditions.

## Files Overview

- `stack.h`: Header file containing the stack structure definition and function declarations.
- `stack.c`: Implementation file with the definitions of stack operations.
- `test.c`: Test file that demonstrates and verifies the functionality of the stack implementation.

## Features

- Dynamic memory management for stack creation.
- Basic stack operations: push, pop, peek.
- Checks for stack overflow and underflow conditions.
- Comprehensive test cases to validate all functionalities.

## Compilation Instructions

To compile the code, ensure you have a C compiler installed (like `gcc`). Use the following command in your terminal:

```bash
gcc test.c stack.c -o stack_test
```

## Running the Tests
After compiling, run the executable to perform tests on the stack implementation:
```bash
./stack_test
```
## Expected Output
The program will print the results of various stack operations, including:
```
Initial state: Is stack empty? 1
Is stack full? 0
Top element after pushes: 30
Popped element: 30
Popped element: 20
Top element after pops: 10
Is stack empty after popping all elements? 1
Stack underflow! Cannot pop from empty stack.
Cannot peek at empty stack.
Is stack full after filling? 1
```

## Usage
You can modify the test.c file to add more test cases or change existing ones to suit your needs. The implementation can be extended further by adding additional features like dynamic resizing or linked list-based stacks.

### Note
code is refined using AI for better understanding.
