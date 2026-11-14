#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    int *arr;
    int capacity;
    int top;
} Stack;
Stack *createstack(int capacity){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->arr = (int *)malloc(capacity * sizeof(int));
    stack->top = -1;
    return stack;
}
void freestack(Stack *stack){
    free(stack->arr);
    free(stack);
}
void push(Stack *stack, int data){
    if(stack->top == stack->capacity -1){
        printf("Overflow");
        return;
    }
    stack->arr[++stack->top] = data;
}
int pop(Stack *stack){
    if(stack->top == -1){
        printf("Underflowwww");
        return -1;
    }
    return stack->arr[stack->top--];
}
int peek(Stack *stack){
    return stack->arr[stack->top];
}
bool isfull(Stack *stack){
    return stack->top == stack->capacity -1;
}
int main(){
    int x;
    printf("Enter the capacity of the stack");
    scanf("%d", &x);
    struct Node *stack= createstack(x);
    printf("Enter the elements into the stack");
    int ele;
    for(int i=0; i<x; i++){
        scanf("%d", &ele);
        push(stack, ele);
    }
    int y= peek(stack);
    printf("%d", y);
    return 0;
}