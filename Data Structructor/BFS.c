//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 8
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
////노드 추가
//void addNode(NODE** head, int vertex) {
//
//	//노드 생성
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
//	//노드가 하나도 없을때
//	if (*head == NULL) {
//		*head = new;
//		return;
//	}
//
//	//마지막이동 후 연결하기
//	NODE* p = *head;
//	while (p->link)
//		p = p->link;
//	p->link = new;
//}
////그래프 i번째 확인
//void showList(NODE* head) {
//	NODE* p = head;
//	while (p->link) {
//		printf("%d->", p->vertex);
//		p = p->link;
//	}
//	printf("%d", p->vertex);
//	printf("\n");
//}
////
//void init(NODE** arr) {
//	addNode(&arr[0], 1);
//	addNode(&arr[0], 2);
//
//	addNode(&arr[1], 0);
//	addNode(&arr[1], 3);
//	addNode(&arr[1], 4);
//
//	addNode(&arr[2], 0);
//	addNode(&arr[2], 5);
//	addNode(&arr[2], 6);
//
//	addNode(&arr[3], 1);
//	addNode(&arr[3], 7);
//
//	addNode(&arr[4], 1);
//	addNode(&arr[4], 7);
//
//	addNode(&arr[5], 2);
//	addNode(&arr[5], 7);
//
//	addNode(&arr[6], 2);
//	addNode(&arr[6], 7);
//
//	addNode(&arr[7], 3);
//	addNode(&arr[7], 4);
//	addNode(&arr[7], 5);
//	addNode(&arr[7], 6);
//}
////전체 확인
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
//	}
//}
//
////[추가] BFS 탐색
//#define TRUE 1
//short int visited[MAX_VERTEX];
//typedef struct queue {
//	int vertex;
//	struct queue* link;
//}QNODE;
//typedef struct qpointer {
//	QNODE* front;
//	QNODE* rear;
//}QPointer;
//
//
//void Enq(QPointer* qp, int v)
//{
//	//새노드
//	QNODE* new = (QNODE*)malloc(sizeof(QNODE));
//	if (new == NULL)
//		return;
//	new->vertex = v;
//	new->link = NULL;
//
//	//노드가 x
//	if (qp->front == NULL)
//	{
//		qp->front = new;
//		qp->rear = new;
//		//코드 완성
//	}
//	else //노드가 o
//	{
//		qp->rear->link = new;
//		qp->rear = new;
//		//코드 완성
//	}
//}
//int Deq(QPointer* qp) {
//
//	if (qp->front == NULL && qp->rear == NULL)
//	{
//		return;
//	}
//	else
//	{
//		if (qp->front != NULL) {
//			//코드 완성 
//			int v = qp->front->vertex;
//			QNODE* del = qp->front;
//			qp->front = qp->front->link;
//			free(del);
//			return v;
//		}
//
//		else
//		{
//			printf("더이상 큐에서 제거할 데이터가 없습니다..\n");
//		}
//
//	}
//
//}
//void bfs(NODE** graph, int v) {
//	NODE* w;
//	QPointer qpointer;
//	qpointer.front = NULL;
//	qpointer.rear = NULL;
//
//	//코드 완성
//	printf("%-3d", v); // 처음 탐색시 vertex 출력
//	visited[v] = TRUE; // 방문 기록 남기기.
//	Enq(&qpointer, v);
//
//	while (qpointer.front != NULL)
//	{
//		v = Deq(&qpointer); // 큐 front를 꺼냄
//
//		NODE* w = graph[v];
//		while (w != NULL)
//		{
//			if (!visited[w->vertex])
//			{
//				printf("%3d", w->vertex);
//				Enq(&qpointer, w->vertex);
//				visited[w->vertex] = TRUE;
//			}
//			w = w->link;
//		}
//	}
//}
//
//int main()
//{
//	//배열 만들기(10칸)
//	NODE* vertexArray[MAX_VERTEX] = { {NULL,} };
//
//	//초기화 
//	init(vertexArray);
//
//	//확인 
//	showAll(vertexArray);
//
//
//	//BFS 탐색 
//	printf("BFS 탐색 : ");
//	bfs(vertexArray, 1);
//	printf("\n");
//
//	return 0;
//}
