//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 8
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
////��� �߰�
//void addNode(NODE** head, int vertex) {
//
//	//��� ����
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
//	//��尡 �ϳ��� ������
//	if (*head == NULL) {
//		*head = new;
//		return;
//	}
//
//	//�������̵� �� �����ϱ�
//	NODE* p = *head;
//	while (p->link)
//		p = p->link;
//	p->link = new;
//}
////�׷��� i��° Ȯ��
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
////��ü Ȯ��
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
//	}
//}
//
////[�߰�] BFS Ž��
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
//	//�����
//	QNODE* new = (QNODE*)malloc(sizeof(QNODE));
//	if (new == NULL)
//		return;
//	new->vertex = v;
//	new->link = NULL;
//
//	//��尡 x
//	if (qp->front == NULL)
//	{
//		qp->front = new;
//		qp->rear = new;
//		//�ڵ� �ϼ�
//	}
//	else //��尡 o
//	{
//		qp->rear->link = new;
//		qp->rear = new;
//		//�ڵ� �ϼ�
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
//			//�ڵ� �ϼ� 
//			int v = qp->front->vertex;
//			QNODE* del = qp->front;
//			qp->front = qp->front->link;
//			free(del);
//			return v;
//		}
//
//		else
//		{
//			printf("���̻� ť���� ������ �����Ͱ� �����ϴ�..\n");
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
//	//�ڵ� �ϼ�
//	printf("%-3d", v); // ó�� Ž���� vertex ���
//	visited[v] = TRUE; // �湮 ��� �����.
//	Enq(&qpointer, v);
//
//	while (qpointer.front != NULL)
//	{
//		v = Deq(&qpointer); // ť front�� ����
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
//	//�迭 �����(10ĭ)
//	NODE* vertexArray[MAX_VERTEX] = { {NULL,} };
//
//	//�ʱ�ȭ 
//	init(vertexArray);
//
//	//Ȯ�� 
//	showAll(vertexArray);
//
//
//	//BFS Ž�� 
//	printf("BFS Ž�� : ");
//	bfs(vertexArray, 1);
//	printf("\n");
//
//	return 0;
//}
