#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void pop(){
    if (top == -1)
    {
        printf("Underflow \n");
    }
    else{
        int item = stack[top--];
        
    }
}