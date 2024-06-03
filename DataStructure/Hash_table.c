#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100 // 해시 테이블의 크기

// 해시 노드 구조체 정의
typedef struct HashNode {
    char *key;
    int value;
    struct HashNode *next;
} HashNode;

// 해시 테이블 구조체 정의
typedef struct {
    HashNode *buckets[TABLE_SIZE];
} HashTable;

// 해시 테이블 초기화 함수
void initializeHashTable(HashTable *hashTable) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable->buckets[i] = NULL;
    }
}

// 해시 함수
int hash(char *key) {
    int hashValue = 0;
    int keyLength = strlen(key);
    for (int i = 0; i < keyLength; i++) {
        hashValue += key[i];
    }
    return hashValue % TABLE_SIZE;
}

// 해시 테이블에 새로운 키-값 쌍을 추가하는 함수
void insert(HashTable *hashTable, char *key, int value) {
    int index = hash(key);
    HashNode *newNode = (HashNode *)malloc(sizeof(HashNode));
    if (newNode == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    // 버킷이 비어있을 경우
    if (hashTable->buckets[index] == NULL) {
        hashTable->buckets[index] = newNode;
    } else {
        // 버킷이 비어있지 않을 경우 충돌 발생
        HashNode *current = hashTable->buckets[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 해시 테이블에서 특정 키에 대한 값을 가져오는 함수
int get(HashTable *hashTable, char *key) {
    int index = hash(key);
    HashNode *current = hashTable->buckets[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return -1; // 키가 없을 경우 -1 반환
}

// 메인 함수
int main() {
    HashTable hashTable;
    initializeHashTable(&hashTable);

    // 해시 테이블에 키-값 쌍 추가
    insert(&hashTable, "apple", 10);
    insert(&hashTable, "banana", 20);
    insert(&hashTable, "orange", 30);

    // 해시 테이블에서 값을 가져오기
    printf("apple: %d\n", get(&hashTable, "apple"));
    printf("banana: %d\n", get(&hashTable, "banana"));
    printf("orange: %d\n", get(&hashTable, "orange"));
    printf("grape: %d\n", get(&hashTable, "grape")); // 존재하지 않는 키

    return 0;
}