//#include <stdio.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* next;
//}Node;
//
//typedef struct _lQueue
//{
//	Node* front; // ����� ù��° ��ġ
//	Node* rear;  // ����� ������ ��ġ
//} Queue;
//
//void Init(Queue* pq)
//{
//	pq->front = NULL;
//	pq->rear = NULL;
//}
//
//int Empty(Queue* pq)
//{
//	if (pq->front == NULL)
//		return 1;
//	else
//		return 0;
//}
//int QPeek(Queue* pq)
//{
//	if (Empty(pq))
//	{
//		printf("Queue Memory Error!");
//		exit(-1);
//	}
//
//	return pq->front->data;
//}
//void PrintQ(Queue* pq)
//{
//	Node* cur = pq->front;
//
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//
//
//}
//
//void Enq(Queue* pq, int data)
//{
//	//1 �����
//	//2 ������ ��
//	//3 ��ũ �ʱ�ȭ
//	Node* new = (Node*)malloc(sizeof(Node));
//	if (new == NULL)
//		return;
//	new->data = data;
//	new->next = NULL;
//
//	if (pq->front == NULL && pq->rear == NULL)	//5 ��� �ϳ��� ������
//	{
//		pq->front = new;
//		pq->rear = new;
//	}
//
//	else   //6 ��� �ϳ��̻� ������
//	{
//		pq->rear->next = new;
//		pq->rear = pq->rear->next;
//	}
//
//	//5 ��� �ϳ��� ������
//	//6 ��� �ϳ��̻� ������
//	//6-1 rear�� next�� new ����
//	//6-2 rear�� ��ġ�� new �� ���� 
//
//}
//
//void Deq(Queue* pq)
//{
//	if (pq->front == NULL && pq->rear == NULL)	//1 ��尡 ���°�� (�ƹ��͵� ���� ���ʻ��¸� ����) (Enq�� �ѹ��� ������ ���)
//	{
//		return;
//	}
//
//	else  //2 ��尡 �ִ°��
//	{
//
//
//		if (pq->front != NULL) // 1ȸ �̻� Enq�� �ѻ���, Deq�۾��� �ϴ� �������� ���̻� �� �����Ͱ� ���� ��츦 ����.
//		{
//			Node* del = pq->front;  //2-1 front �� ��� �ּҸ� del�� ��´�
//			pq->front = pq->front->next;  //2-2 front �� next��ġ�� �̵���Ų��
//			free(del);  //2-3 del�� free()�Ѵ�
//		}
//
//		else // 1ȸ�̻� Enq�� �ѻ���, Deq�۾��� �ϴ� �������� ���̻� �� �����Ͱ� ���� ��츦 ����.
//		{
//			printf("���̻� ������ �����Ͱ� �����ϴ�.");
//			pq->rear = NULL;
//		}
//
//	}
//
//
//}
//int main(void)
//{
//	//-----------------------------------------
//	// Queue�� ���� �� �ʱ�ȭ ///////
//	//-----------------------------------------
//	Queue q;
//	Init(&q);
//
//	//-----------------------------------------
//	// ������ �ֱ� ///////
//	//-----------------------------------------
//	Enq(&q, 1);  Enq(&q, 2);
//	Enq(&q, 3);  Enq(&q, 4);
//	Enq(&q, 5);
//	PrintQ(&q);
//
//	//-----------------------------------------
//	// ������ ������ ///////
//	//-----------------------------------------
//	printf("Deq() 1ȸ : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 2ȸ : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 3ȸ : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 4ȸ : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 5ȸ : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 6ȸ : "); Deq(&q); PrintQ(&q);
//	return 0;
//}