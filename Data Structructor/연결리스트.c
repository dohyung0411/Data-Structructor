// ���Ḯ��Ʈ

/*
* �׷��� �����ߴ�, ���Ḯ��Ʈ!
���Ḯ��Ʈ
- ������ ������ ���ӵ� ��ġ�� ����Ǵ� ���, �� ������ ������ ���� ��ġ�� ����ϴ� ���·� ����
- 0�� �̻��� �����Ͱ� ������ ������ ������ �ȴ�.
����
- ���� ����, ���� ������ �迭 ����Ʈ ���� �ξ� ����.
����
- Ư�� ��ġ�� �ִ� ������ �ѹ��� �̵��� �� ���� �Ф�

- ���� ���� ���԰� ������ ����ϰ� �Ͼ �� ����!
->���Ḯ��Ʈ�� ����
���� ���� ���԰� ������ ���� ���Ͼ��, �̹� ������� �����Ϳ� ������ ���� �Ұ� ����.
->�迭����Ʈ�� ����

���Ḯ��Ʈ
����
�����Ϳ�, ���� �������� ��ġ�� �����ϴ� ������� �����ϴ� ����Ʈ
���(List = �迭����Ʈ�� ������ ����ü Ÿ��, Item->����Ʈ�� ���� �� ������ Ÿ��)
Boolean->�� ���� ������ ������ Ÿ��)

����Ʈ�� ���� �����ϱ�
insert
@param
List* l
@return
x = > void

����Ʈ�� 'Ư�� ������' ���� �����ϱ�


����Ʈ���� ���� ��������(����)
get()
@param
List * l
� ����Ʈ���� ���� ������ �ð���
int Idx
����Ʈ�� ���° ���� ������ �ð���
@return

����Ʈ���� Ư�� ���� ��ġ�� ��������
getIndex()
@param
List l
� ����Ʈ���� ���� Ž���Ұ���
Item target
��ġ�� Ž���� ��

@return
if (����Ʈ l�� target �����Ͱ� ���ٸ�)
int - 1;

else
int Idx
target �������� ��ġ

����Ʈ�� �� ����ִ��� Ȯ���ϱ�
isEmpty
@param
List l
�� ������� Ȯ���� ����Ʈ
@return
if (l�� �� ����ٸ�)
Boolean true;
else
Boolean false;

����Ʈ���� Ư�� ���� �����ϴ��� Ȯ���ϱ�
isContains()
@param
List l
� ����Ʈ~~~?
Item target
Ž���� �� Ư�� ��
@return
if (l�ȿ� target�� ������)
Boolean true
else
Boolean false

*/

/*
	���Ḯ��Ʈ �����ϱ�
	����� ����
		1. ���� ������ ������
		2. �� ������ ������ ��ġ
			1. ~~�� ��ġ (�ּҰ�)
				������ �ּҰ��̴ϱ� ������ ������ �ڱ���
			2. '��'�� ��ġ?
				�� ������ '���'�� ��ġ
			=> �� ������ '���'�� '�ּҸ� �����ؾ� �Ǳ���
*/

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node
//{
//	int data;
//	struct node* pNext;
//}ListNode;
//
//int main(void)
//{
//	// �츮�� ����� ���� ����Ʈ�� �ᱹ ù��° �������� ��ġ�� �����ϰ� ������ ��
//
//	ListNode* list = NULL; // ���� ������ ���Ҵ� ���� ����� �ּҿ� NULL�� �����ϱ� (���!!)
//	ListNode* currentNode = NULL;
//	// 1. list�� ù ���Ҹ� �����غ���.
//
//	// ���� �� ��Ȳ : �����͸� �ϳ� ������ �� ���� ��ŭ�� ũ�� '�ϳ�'�� �ʿ��ϴ�!!
//
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode�� ���� ���� ������ �ּҰ� ����.
//	newNode->data = 1;
//	newNode->pNext = NULL;
//
//	list = newNode;
//
//	// 3. ����Ʈ�� ���� �������� ���� �ϳ��� �߰��� �����غ���
//  /*
//  *				1. ������ ������ �� �ִ� ũ���� ���� �����
//  *				2. ������ �� ������ �������ְ�
//  *				3. ����Ʈ�� �ش��带 '�ٿ�' �ش�
//  */
//
//
//	newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode�� ���� ���� ������ �ּҰ� ����.
//	newNode->data = 2;
//	newNode->pNext = NULL;
//	currentNode = list;
//	while (currentNode->pNext != NULL)
//		currentNode = currentNode->pNext;
//	currentNode->pNext = newNode;
//
//	// next�� NULL �̾��� ����� next�� ���� ������� newNode�� �ּҸ� �����Ѵ�.
//
//	newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode�� ���� ���� ������ �ּҰ� ����.
//	newNode->data = 3;
//	newNode->pNext = NULL;
//	currentNode = list;
//	while (currentNode->pNext != NULL)
//		currentNode = currentNode->pNext;
//	currentNode->pNext = newNode;
//
//	// 2. �����Ͱ� �� ������ ����ϴ� �ڵ� �ۼ�!
//
//	currentNode = list;
//	while (currentNode != NULL)
//	{
//		printf("%d", currentNode->data);
//		currentNode = currentNode->pNext;
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
//typedef struct node {
//	char data[4];
//	struct ListNode* link;
//} Node;
//
//// ����Ʈ�� ����
//Node* L;	//��������
//
//// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
//void freeLinkedList() {
//	Node* p;
//	Node* cur = L;
//
//	while (cur != NULL) {
//		p = cur;
//		cur = cur->link;
//		free(p);
//	}
//
//	L = NULL;
//}
//
//// ���� ����Ʈ�� ������� ����ϴ� ����
//void printList() {
//	Node* cur = L;
//
//	printf("L = (");
//	while (cur != NULL) {
//		printf("%s", cur->data);
//		cur = cur->link;
//		if (cur != NULL)
//			printf(", ");
//	}
//	printf(") \n");
//}
//
//// ù ��° ���� �����ϴ� ����
//void insertFirstNode(char* x) {
//
//	Node* new = (Node*)malloc(sizeof(Node));		//1 new ��� ����(����ü+�����Ҵ�+������)-> Nullüũ 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 ������ �κ� ������
//	new->link = NULL;										//3 ��ũ Null ����
//
//	if (L == NULL)		//4-1 ��尡 �ϳ��� ���°�� -> ����L�����Ϳ� ��� �ٷο���
//	{
//		L = new;
//	}
//
//	else //4-2 ��尡 �ϳ��̻� �ִ°�� -> ó����ġ�� ����
//	{
//		new->link = L; // new->link�� L�� ����
//		L = new;       // L�� new ����
//	}
//
//
//}
//
//
//// ������ ���� �����ϴ� ����
//void insertLastNode(char* x) {
//
//	Node* new = (Node*)malloc(sizeof(Node));	//1 new ��� ����(����ü+�����Ҵ�+������)-> Nullüũ 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 ������ �κ� ������
//	new->link = NULL;	 //3 ��ũ Null ����
//
//
//	if (L == NULL)	   //4-1 ��尡 �ϳ��� ���°�� -> ����L�����Ϳ� ��� �ٷο��� 
//	{
//		L = new;
//	}
//
//	else 	//4-2 ��尡 �ϳ��̻� �ִ°�� -> ������ ��ġ�� ���� �ڵ� �ۼ� 
//	{
//		Node* cur = L;
//		while (cur->link != NULL) // cur�� ����Ű�� �ִ� link�� ���� NULL�� �ƴ϶�� �ݺ�
//		{
//			cur = cur->link;
//		}
//		// cur���� ������ ��� �ּҰ� ��� ����.
//		cur->link = new;
//	}
//	//5 tmp �����͸� ���� �� ��带 ��ȸ(tmp=tmp->link)�ϸ鼭 ��������ġ(link�� NULL) ���� Ȯ��
//	//6 ��������ġ���� ����带 ����	
//}
//
//// ����Ʈ���� x ��带 Ž���ϴ� ����
//Node* searchNode(char* x)
//{
//	Node* search = L;		//1 Ž���� ����ü ������(search) ����			//2 ����� �����ּҸ� search�����Ϳ� ����
//
//	if (search == NULL)
//		return;
//	else
//	{
//		while (search != NULL)
//		{
//			if (strcmp(search->data, x) == 0) // ��ġ�ϴ� ��� Ȯ��
//			{
//				return search; // ��ġ�ϴ� ��� �ּ� ����
//			}
//			search = search->link; // �� ��带 ��ȸ(tmp = tmp->link)
//		}
//	}
//
//	return search;     // search���� NULL���� �����Ŵ�.
//
//
//}
//
//// ��带 pre �ڿ� �����ϴ� ����
//void insertMiddleNode(Node* pre, char* x)
//{
//	Node* new = (Node*)malloc(sizeof(Node));	//1 new ��� ����(����ü+�����Ҵ�+������)-> Nullüũ 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 ������ �κ� ������
//	new->link = NULL;	 //3 ��ũ Null ����
//
//	//if (L == NULL)
//	//{
//	//	printf("ã���� �ϴ� ��尡 �����ϴ�.");
//	//	return NULL;
//	//}
//	//						 
//	//else // ��尡 1�̻�
//	//{
//	//	if (pre == NULL)	//4-1 pre �� NULL �� ���(ã�� ��尡 ���� ���, �����Ҽ�����)
//	//	{
//	//		printf("ã���� �ϴ� ��尡 �����ϴ�.");
//	//		return NULL;
//	//	}
//	//	else		//4-2 pre �� NULL �� �ƴѰ��(pre->link ���� new->link ������ // pre->link�� new����ּҸ� ����)	
//	//	{
//	//		new->link = pre->link;
//	//		pre->link = new;
//	//	}
//	//				
//	//}
//
//	// or
//	if (L != NULL && pre != NULL)
//	{
//		new->link = pre->link;
//		pre->link = new;
//	}
//
//
//}
//
//// ����Ʈ���� ��� p�� �����ϴ� ����
//void deleteNode(Node* del)
//{	//1 ������ �ش� ������ �������� ��ȸ
//
//	if (del == NULL)
//		return;
//
//	//2 ���� ������� ��ġ Ž��
//	Node* pre = L;
//	if (pre == NULL) // ��� 0
//	{
//		return NULL;
//	}
//
//	else // ��� 1 �̻�
//	{
//		if (pre == del) // ���� ��尡 ù ��� �϶�
//		{
//			L = pre->link;
//		}
//		else
//		{
//			while (pre->link != del)
//			{
//				pre = pre->link;
//			}
//			// pre ���� del ��� �տ� �ְ� ��.
//
//			pre->link = del->link;
//		}
//
//
//	}
//	free(del); // ��� ����
//
//
//}
//
//
//int main() {
//	Node* p;
//	L = NULL;               //���� ����Ʈ ����
//
//	// ---------------------------------------------
//	// ������ ����(ù���)
//	// ---------------------------------------------
//
//	printf("----------(1) ù��忡 ���� [��][��] ----------\n");
//	insertFirstNode("��");
//	insertFirstNode("��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ ����(�����)
//	// ---------------------------------------------
//	printf("\n----------(2) ������ ��忡 ���� [��][��][��] ----------\n");
//	insertLastNode("��");
//	insertLastNode("��");
//	insertLastNode("��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ Ž��
//	// ---------------------------------------------
//	printf("\n----------(4) ����Ʈ���� [��] ��� Ž���ϱ�!----------\n");
//	p = searchNode("��");
//	if (p == NULL)
//		printf("ã�� �����Ͱ� �����ϴ�.\n");
//	else
//		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
//
//	printf("\n----------(3) ����Ʈ���� [��] ��� Ž���ϱ�! ----------\n");
//	p = searchNode("��");
//	if (p == NULL)
//		printf("ã�� �����Ͱ� �����ϴ�.\n");
//	else
//		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
//
//	// ---------------------------------------------
//	// ������ ���� (�߰� ���)
//	// ---------------------------------------------
//	printf("\n----------(5) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�!----------\n");
//	insertMiddleNode(p, "��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ ����
//	// ---------------------------------------------
//	printf("\n----------(6) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");		// ������ ��� ��ġ p�� ã��
//	deleteNode(p);				// ������ p ��� ����
//	printList();
//
//	printf("\n----------(7) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");
//	deleteNode(p);
//	printList();
//
//	printf("\n----------(8) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");
//	deleteNode(p);
//	printList();
//
//
//	freeLinkedList();               //����Ʈ �޸� ����
//	return 0;
//}