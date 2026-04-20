#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0;
int rear = -1;

// Enqueue operation
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow (Full Queue)\n");
    } else {
        rear++;
        queue[rear] = value;
        printf("Inserted element: %d\n", value);
    }
}

// Display queue
void display() {
    if (rear == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int value;

    printf("Enter value to insert: ");
    scanf("%d", &value);

    enqueue(value);

    printf("\nQueue after ENQUEUE:\n");
    display();

    return 0;
}