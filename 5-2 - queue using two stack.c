#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;


//Checking if empty
int isEmpty1(){
    return(top1==-1);
}
int isEmpty2(){
    return(top2==-1);
}

//checking if full
int isFull1(){
    return(top1==MAX -1);
}
int isFull2(){
    return(top2==MAX-1);
}

//push statements
void push1(int x){
    stack1[++top1]=x;
}
void push2(int x){
    stack2[++top2]=x;
}

//pop statements
int pop1(){
    return (stack1[top1--]);
}
int pop2(){
    return (stack2[top2--]);
}

//Enqueue
void enqueue(int x){// we will do all the operations in 1st stack
    if(isFull1()){
        printf("QUEUE OVERFLOW!!\n");
        return;
    }
    push1(x);
    printf("%d enqueued\n",x);
}

//dequeue
void dequeue(){
    if (isEmpty1()&&isEmpty2()){
        printf("Queue underflow!!\n");
        return;
    }
    //moving elements only if stack 2 is empty to mantain proper order 
    if (isEmpty2()){
        while(!isEmpty1()){
            push2(pop1());
        }
    }
    printf("%d dequeued\n", pop2());
}
//seeing front element
void peek(){
    if(isEmpty1()&&isEmpty2()){
        printf("Queue is empty\n");
        return;
    }
    
    if(isEmpty2()){
        while(!isEmpty1()){
            push2(pop1());
        }
    }
    printf("Front element is %d\n", stack2[top2]);
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    peek();
    return 0;
}
