//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 8
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
//��� �߰�
//void addNode(NODE** head, int vertex) {
//
//	��� ����
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
//	��尡 �ϳ��� ������
//	if (*head == NULL) {
//		*head = new;
//		return;
//	}
//
//	�������̵� �� �����ϱ�
//	NODE* p = *head;
//	while (p->link)
//		p = p->link;
//	p->link = new;
//}
//�׷��� i��° Ȯ��
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
//��ü Ȯ��
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
//	}
//}
//
//Ž��
//#define TRUE 1
//short int visited[MAX_VERTEX];
//NODE* graph[MAX_VERTEX];
//
//void dfs(NODE** graph, int v) {
//
//	���
//	printf("%-3d", v);
//
//	�湮��� �����
//	visited[v] = TRUE;
//
//	DFS Ž��
//	NODE* w = graph[v];
//	while (w != NULL)
//	{
//		�湮�� ���� ���ٸ�
//		if (!visited[w->vertex])
//		{
//			dfs(graph, w->vertex);
//		}
//		w = w->link;
//
//			
//		���ȣ��(�ش� index�� �̵�)	
//		�湮�� ���� �ִٸ� �������� �̵�
//	}
//}
//
//int main()
//{
//	�迭 �����(10ĭ)
//	NODE* vertexArray[MAX_VERTEX] = { {NULL,} };
//
//	�ʱ�ȭ 
//	init(vertexArray);
//
//	Ȯ�� 
//	showAll(vertexArray);
//
//
//	DFS Ž�� 
//	printf("DFS Ž�� : ");
//	dfs(vertexArray, 2);
//	printf("\n");
//
//	return 0;
//}