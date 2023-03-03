//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 8
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
//노드 추가
//void addNode(NODE** head, int vertex) {
//
//	노드 생성
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
//	노드가 하나도 없을때
//	if (*head == NULL) {
//		*head = new;
//		return;
//	}
//
//	마지막이동 후 연결하기
//	NODE* p = *head;
//	while (p->link)
//		p = p->link;
//	p->link = new;
//}
//그래프 i번째 확인
//void showList(NODE* head) {
//	NODE* p = head;
//	while (p->link) {
//		printf("%d->", p->vertex);
//		p = p->link;
//	}
//	printf("%d", p->vertex);
//	printf("\n");
//}
//
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
//전체 확인
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
//	}
//}
//
//탐색
//#define TRUE 1
//short int visited[MAX_VERTEX];
//NODE* graph[MAX_VERTEX];
//
//void dfs(NODE** graph, int v) {
//
//	출력
//	printf("%-3d", v);
//
//	방문기록 남기기
//	visited[v] = TRUE;
//
//	DFS 탐색
//	NODE* w = graph[v];
//	while (w != NULL)
//	{
//		방문한 적이 없다면
//		if (!visited[w->vertex])
//		{
//			dfs(graph, w->vertex);
//		}
//		w = w->link;
//
//			
//		재귀호출(해당 index로 이동)	
//		방문한 적이 있다면 다음으로 이동
//	}
//}
//
//int main()
//{
//	배열 만들기(10칸)
//	NODE* vertexArray[MAX_VERTEX] = { {NULL,} };
//
//	초기화 
//	init(vertexArray);
//
//	확인 
//	showAll(vertexArray);
//
//
//	DFS 탐색 
//	printf("DFS 탐색 : ");
//	dfs(vertexArray, 2);
//	printf("\n");
//
//	return 0;
//}