//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 4
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
////노드 추가							// Node** head = &vertexArray[0]
//void addNode(NODE** head, int vertex) // Node** head 배열포인터의 각 요소를 가리키는 더블 포인터
//{										// int vertext : 추가할 지점 번호
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
////	노드가 하나도 없을때
//	if (*head == NULL)
//	{
//		*head = new;
//		return;
//	}
//	//마지막이동 후 연결하기
//	NODE* cur = *head;
//	while (cur->link != NULL)
//		cur = cur->link;
//	cur->link = new;
//
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
//
////그래프 초기화
//void init(NODE** arr) {
//	//완성하기 addNode함수 사용하기
//	addNode(&arr[0], 1);
//	addNode(&arr[0], 2);
//	addNode(&arr[0], 3);
//
//	addNode(&arr[1], 0);
//	addNode(&arr[1], 2);
//	addNode(&arr[1], 3);
//			
//	addNode(&arr[2], 0);
//	addNode(&arr[2], 1);
//	addNode(&arr[2], 3);
//			
//	addNode(&arr[3], 0);
//	addNode(&arr[3], 1);
//	addNode(&arr[3], 2);
//}
////전체 확인
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
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
//	return 0;
//}