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
//	Node* front; // 노드의 첫번째 위치
//	Node* rear;  // 노드의 마지막 위치
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
//	//1 새노드
//	//2 데이터 값
//	//3 링크 초기화
//	Node* new = (Node*)malloc(sizeof(Node));
//	if (new == NULL)
//		return;
//	new->data = data;
//	new->next = NULL;
//
//	if (pq->front == NULL && pq->rear == NULL)	//5 노드 하나도 없을때
//	{
//		pq->front = new;
//		pq->rear = new;
//	}
//
//	else   //6 노드 하나이상 있을때
//	{
//		pq->rear->next = new;
//		pq->rear = pq->rear->next;
//	}
//
//	//5 노드 하나도 없을때
//	//6 노드 하나이상 있을때
//	//6-1 rear의 next에 new 대입
//	//6-2 rear의 위치를 new 로 지정 
//
//}
//
//void Deq(Queue* pq)
//{
//	if (pq->front == NULL && pq->rear == NULL)	//1 노드가 없는경우 (아무것도 없는 최초상태를 가정) (Enq를 한번도 안했을 경우)
//	{
//		return;
//	}
//
//	else  //2 노드가 있는경우
//	{
//
//
//		if (pq->front != NULL) // 1회 이상 Enq를 한상태, Deq작업을 하는 과정에서 더이상 뺄 데이터가 없는 경우를 가정.
//		{
//			Node* del = pq->front;  //2-1 front 의 노드 주소를 del에 담는다
//			pq->front = pq->front->next;  //2-2 front 를 next위치로 이동시킨다
//			free(del);  //2-3 del를 free()한다
//		}
//
//		else // 1회이상 Enq를 한상태, Deq작업을 하는 과정에서 더이상 뺄 데이터가 없는 경우를 가정.
//		{
//			printf("더이상 제거할 데이터가 없습니다.");
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
//	// Queue의 생성 및 초기화 ///////
//	//-----------------------------------------
//	Queue q;
//	Init(&q);
//
//	//-----------------------------------------
//	// 데이터 넣기 ///////
//	//-----------------------------------------
//	Enq(&q, 1);  Enq(&q, 2);
//	Enq(&q, 3);  Enq(&q, 4);
//	Enq(&q, 5);
//	PrintQ(&q);
//
//	//-----------------------------------------
//	// 데이터 꺼내기 ///////
//	//-----------------------------------------
//	printf("Deq() 1회 : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 2회 : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 3회 : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 4회 : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 5회 : "); Deq(&q); PrintQ(&q);
//	printf("Deq() 6회 : "); Deq(&q); PrintQ(&q);
//	return 0;
//}