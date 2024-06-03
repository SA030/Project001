#include <stdio.h>
#include <stdlib.h>

// 그래프 노드 구조체 정의
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

// 그래프 구조체 정의
typedef struct Graph {
    int numVertices;
    Node** adjLists;
} Graph;

// 그래프 초기화 함수
Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;

    // 각 정점에 대한 인접 리스트 초기화
    graph->adjLists = (Node**)malloc(vertices * sizeof(Node*));
    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
    }

    return graph;
}

// 그래프에 간선 추가 함수
void addEdge(Graph* graph, int src, int dest) {
    // 소스 노드에서 대상 노드로의 간선 추가
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // 방향성이 있는 그래프일 때만 다음 주석을 해제합니다.
    /*
    // 대상 노드에서 소스 노드로의 간선 추가
    newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = src;
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
    */
}

// 그래프 출력 함수
void printGraph(Graph* graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        Node* temp = graph->adjLists[i];
        printf("정점 %d: ", i);
        while (temp != NULL) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// 메인 함수
int main() {
    // 그래프 생성
    int vertices = 5; // 정점의 개수
    Graph* graph = createGraph(vertices);

    // 간선 추가
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // 그래프 출력
    printGraph(graph);

    return 0;
}