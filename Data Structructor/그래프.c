//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTEX 4
//typedef struct node {
//	int vertex;
//	struct node* link;
//} NODE;
//
////��� �߰�							// Node** head = &vertexArray[0]
//void addNode(NODE** head, int vertex) // Node** head �迭�������� �� ��Ҹ� ����Ű�� ���� ������
//{										// int vertext : �߰��� ���� ��ȣ
//	NODE* new = (NODE*)malloc(sizeof(NODE));
//	if (new == NULL)
//		return;
//	new->vertex = vertex;
//	new->link = NULL;
//
////	��尡 �ϳ��� ������
//	if (*head == NULL)
//	{
//		*head = new;
//		return;
//	}
//	//�������̵� �� �����ϱ�
//	NODE* cur = *head;
//	while (cur->link != NULL)
//		cur = cur->link;
//	cur->link = new;
//
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
//
////�׷��� �ʱ�ȭ
//void init(NODE** arr) {
//	//�ϼ��ϱ� addNode�Լ� ����ϱ�
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
////��ü Ȯ��
//void showAll(NODE** arr)
//{
//	for (int i = 0; i < MAX_VERTEX; i++) {
//		showList(arr[i]);
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
//	return 0;
//}