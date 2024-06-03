#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // 스택의 최대 크기

// 스택 구조체 정의
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// 스택 초기화 함수
void initializeStack(Stack *stack) {
    stack->top = -1;
}

// 스택이 비어있는지 확인하는 함수
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// 스택이 가득 찼는지 확인하는 함수
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// 스택에 요소를 추가하는 함수
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("스택이 가득 찼습니다.\n");
        return;
    }
    stack->items[++stack->top] = value;
}

// 스택에서 요소를 제거하고 반환하는 함수
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어 있습니다.\n");
        return -1; // 임의의 값 반환
    }
    return stack->items[stack->top--];
}

// 스택에서 가장 위에 있는 요소를 반환하는 함수
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어 있습니다.\n");
        return -1; // 임의의 값 반환
    }
    return stack->items[stack->top];
}

// 메인 함수
int main() {
    Stack stack;
    initializeStack(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);

    printf("스택에서 팝한 값: %d\n", pop(&stack));
    printf("스택의 가장 위에 있는 값: %d\n", peek(&stack));

    return 0;
}