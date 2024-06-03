#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // 큐의 최대 크기

// 큐 구조체 정의
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// 큐 초기화 함수
void initializeQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// 큐가 비어있는지 확인하는 함수
int isEmpty(Queue *queue) {
    return queue->front == -1;
}

// 큐가 가득 찼는지 확인하는 함수
int isFull(Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// 큐에 요소를 추가하는 함수
void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("큐가 가득 찼습니다.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->items[queue->rear] = value;
}

// 큐에서 요소를 제거하고 반환하는 함수
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("큐가 비어 있습니다.\n");
        return -1; // 임의의 값 반환
    }
    int removedItem = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return removedItem;
}

// 메인 함수
int main() {
    Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);

    printf("큐에서 디큐한 값: %d\n", dequeue(&queue));
    printf("큐에서 디큐한 값: %d\n", dequeue(&queue));

    return 0;
}