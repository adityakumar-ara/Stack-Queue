#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

void pop() {
    if (top >= 0) {
        top--;
    }
}

void print_stack() {
    printf("[");
    for (int i = 0; i <= top; i++) {
        printf("%d", stack[i]);
        if (i < top) printf(", ");
    }
    printf("]\n");
}

int main() {
    // # push
    push(10);
    push(20);
    push(30);

    print_stack(); // # [10, 20, 30]

    // # pop
    pop();

    print_stack(); // # [10, 20]
    
    return 0;
}