#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30, 40, 50}; // pre-filled stack
int top = 4; // last index (MAX-1)

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow (Empty Stack)\n");
    } else {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

// Display stack
void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    printf("Initial Stack:\n");
    display();

    printf("\nPerforming POP operation...\n");
    pop();

    printf("\nStack after POP:\n");
    display();

    return 0;
}