#include <stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;


int isEmpty(){
    return (top==-1);
}
int isFull(){
    return(top==MAX-1);
}
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    
    peek();
    
    pop();
    peek();
    
    return 0;
}
