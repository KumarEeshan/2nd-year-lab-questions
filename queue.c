#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Queue{
    int *arr;
    int capacity;
    int size;
};
struct Queue *createqueue(int capacity){
    struct Queue *q= (struct Queue*)malloc(sizeof(struct Queue));
    q->capacity = capacity;
    q->size=-1;
    q->arr= (int *)malloc(capacity * sizeof(int));
    return q;
}
bool isfull(struct Queue *q){
    return q->capacity-1 == q->size;
}
bool isempty(struct Queue *q){
    return q->size == -1;
}
void enqueue(struct Queue *q, int data){
    if(isfull(q)){
        printf("Overflow");
        return;
    }
    q->arr[++q->size] = data;
}
int getrear(struct Queue *q){
    if(isempty(q)){
        printf("Queue is empty");
        return -1;
    }
    return q->arr[q->size];
}
int getfront(struct Queue *q){
    if(isempty(q)){
        printf("Queue is empty");
        return -1;
    }
    return q->arr[0];
}
void dequeue(struct Queue *q){
    if(isempty(q)){
        printf("Underflow");
        return;
    }
    for(int i=1; i<q->size; i++){
        q->arr[i-1] = q->arr[i];
    }
    q->size--;
}
int main(){
    int x;
    printf("Enter the capacity of the queue\n");
    scanf("%d", &x);
    struct Queue *q= createqueue(x);
    printf("Enter the elements into queue\n");
    int ele;
    for(int i=0; i<x; i++){
        scanf("%d", &ele);
        enqueue(q, ele);
    }
    printf("%d", getrear(q));
    printf("%d", getfront(q));
    return 0;
}
