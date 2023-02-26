// 연결리스트

/*
* 그래서 구현했다, 연결리스트!
연결리스트
- 각각의 값들이 연속된 위치에 저장되는 대신, 내 다음번 순서의 값의 위치만 기억하는 형태로 구현
- 0개 이상의 데이터가 순서를 가지고 저장이 된다.
장점
- 값의 삽입, 삭제 과정이 배열 리스트 보다 훨씬 빠름.
단점
- 특정 위치에 있는 값으로 한번에 이동할 수 없음 ㅠㅠ

- 만약 값의 삽입과 삭제가 빈번하게 일어날 것 같다!
->연결리스트가 유리
만약 값의 삽입과 삭제는 별로 안일어나고, 이미 만들어진 데이터에 접근을 많이 할것 같다.
->배열리스트가 유리

연결리스트
형태
데이터와, 다음 데이터의 위치를 저장하는 방식으로 구현하는 리스트
기능(List = 배열리스트를 구현한 구현체 타입, Item->리스트에 저장 될 데이터 타입)
Boolean->논리 값을 가지는 데이터 타입)

리스트에 값을 저장하기
insert
@param
List* l
@return
x = > void

리스트에 '특정 순서에' 값을 저장하기


리스트에서 값을 가져오기(삭제)
get()
@param
List * l
어떤 리스트에서 값을 가지고 올건지
int Idx
리스트의 몇번째 값을 가지고 올건지
@return

리스트에서 특정 값의 위치를 가져오기
getIndex()
@param
List l
어떤 리스트에서 값을 탐색할건지
Item target
위치를 탐색할 값

@return
if (리스트 l에 target 데이터가 없다면)
int - 1;

else
int Idx
target 데이터의 위치

리스트가 텅 비어있는지 확인하기
isEmpty
@param
List l
텅 비었는지 확인할 리스트
@return
if (l이 텅 비었다면)
Boolean true;
else
Boolean false;

리스트에서 특정 값이 존재하는지 확인하기
isContains()
@param
List l
어떤 리스트~~~?
Item target
탐색을 할 특정 값
@return
if (l안에 target이 있으면)
Boolean true
else
Boolean false

*/

/*
	연결리스트 구현하기
	노드의 구성
		1. 내가 저장할 데이터
		2. 내 다음번 순서의 위치
			1. ~~의 위치 (주소값)
				뭔가의 주소값이니까 뭔가의 포인터 겠구나
			2. '뭐'의 위치?
				내 다음번 '노드'의 위치
			=> 내 다음번 '노드'의 '주소를 저장해야 되구나
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
//	// 우리가 만들고 싶은 리스트는 결국 첫번째 데이터의 위치만 저장하고 있으면 됨
//
//	ListNode* list = NULL; // 가장 마지막 원소는 다음 노드의 주소에 NULL을 저장하기 (약속!!)
//	ListNode* currentNode = NULL;
//	// 1. list에 첫 원소를 삽입해보자.
//
//	// 지금 내 상황 : 데이터를 하나 저장할 수 있을 만큼의 크기 '하나'가 필요하다!!
//
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode에 새로 만든 공간의 주소가 저장.
//	newNode->data = 1;
//	newNode->pNext = NULL;
//
//	list = newNode;
//
//	// 3. 리스트의 가장 마지막에 원소 하나를 추가로 삽입해보자
//  /*
//  *				1. 데이터 저장할 수 있는 크기의 공간 만들고
//  *				2. 데이터 값 적당히 삽입해주고
//  *				3. 리스트에 해당노드를 '붙여' 준다
//  */
//
//
//	newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode에 새로 만든 공간의 주소가 저장.
//	newNode->data = 2;
//	newNode->pNext = NULL;
//	currentNode = list;
//	while (currentNode->pNext != NULL)
//		currentNode = currentNode->pNext;
//	currentNode->pNext = newNode;
//
//	// next가 NULL 이었던 노드의 next에 새로 만들어준 newNode의 주소를 저장한다.
//
//	newNode = (ListNode*)malloc(sizeof(ListNode)); // newNode에 새로 만든 공간의 주소가 저장.
//	newNode->data = 3;
//	newNode->pNext = NULL;
//	currentNode = list;
//	while (currentNode->pNext != NULL)
//		currentNode = currentNode->pNext;
//	currentNode->pNext = newNode;
//
//	// 2. 데이터가 잘 들어갔는지 출력하는 코드 작성!
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
//// 단순 연결 리스트의 노드 구조를 구조체로 정의
//typedef struct node {
//	char data[4];
//	struct ListNode* link;
//} Node;
//
//// 리스트의 시작
//Node* L;	//전역변수
//
//// 연결 리스트의 전체 메모리를 해제하는 연산
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
//// 연결 리스트를 순서대로 출력하는 연산
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
//// 첫 번째 노드로 삽입하는 연산
//void insertFirstNode(char* x) {
//
//	Node* new = (Node*)malloc(sizeof(Node));		//1 new 노드 생성(구조체+동적할당+포인터)-> Null체크 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 데이터 부분 값삽입
//	new->link = NULL;										//3 링크 Null 삽입
//
//	if (L == NULL)		//4-1 노드가 하나도 없는경우 -> 전역L포인터에 노드 바로연결
//	{
//		L = new;
//	}
//
//	else //4-2 노드가 하나이상 있는경우 -> 처음위치에 연결
//	{
//		new->link = L; // new->link에 L을 대입
//		L = new;       // L에 new 대입
//	}
//
//
//}
//
//
//// 마지막 노드로 삽입하는 연산
//void insertLastNode(char* x) {
//
//	Node* new = (Node*)malloc(sizeof(Node));	//1 new 노드 생성(구조체+동적할당+포인터)-> Null체크 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 데이터 부분 값삽입
//	new->link = NULL;	 //3 링크 Null 삽입
//
//
//	if (L == NULL)	   //4-1 노드가 하나도 없는경우 -> 전역L포인터에 노드 바로연결 
//	{
//		L = new;
//	}
//
//	else 	//4-2 노드가 하나이상 있는경우 -> 마지막 위치에 연결 코드 작성 
//	{
//		Node* cur = L;
//		while (cur->link != NULL) // cur이 가리키고 있는 link의 값이 NULL이 아니라면 반복
//		{
//			cur = cur->link;
//		}
//		// cur에는 마지막 노드 주소가 담겨 있음.
//		cur->link = new;
//	}
//	//5 tmp 포인터를 만들어서 각 노드를 순회(tmp=tmp->link)하면서 마지막위치(link가 NULL) 인지 확인
//	//6 마지막위치에서 새노드를 연결	
//}
//
//// 리스트에서 x 노드를 탐색하는 연산
//Node* searchNode(char* x)
//{
//	Node* search = L;		//1 탐색용 구조체 포인터(search) 생성			//2 노드의 시작주소를 search포인터에 저장
//
//	if (search == NULL)
//		return;
//	else
//	{
//		while (search != NULL)
//		{
//			if (strcmp(search->data, x) == 0) // 일치하는 노드 확인
//			{
//				return search; // 일치하는 노드 주소 리턴
//			}
//			search = search->link; // 각 노드를 순회(tmp = tmp->link)
//		}
//	}
//
//	return search;     // search안은 NULL값이 있을거다.
//
//
//}
//
//// 노드를 pre 뒤에 삽입하는 연산
//void insertMiddleNode(Node* pre, char* x)
//{
//	Node* new = (Node*)malloc(sizeof(Node));	//1 new 노드 생성(구조체+동적할당+포인터)-> Null체크 
//	if (new == NULL)
//		return;
//	strcpy_s(new->data, sizeof(new->data), x);	//2 데이터 부분 값삽입
//	new->link = NULL;	 //3 링크 Null 삽입
//
//	//if (L == NULL)
//	//{
//	//	printf("찾으려 하는 노드가 없습니다.");
//	//	return NULL;
//	//}
//	//						 
//	//else // 노드가 1이상
//	//{
//	//	if (pre == NULL)	//4-1 pre 가 NULL 인 경우(찾는 노드가 없는 경우, 연결할수없음)
//	//	{
//	//		printf("찾으려 하는 노드가 없습니다.");
//	//		return NULL;
//	//	}
//	//	else		//4-2 pre 가 NULL 이 아닌경우(pre->link 값을 new->link 에저장 // pre->link에 new노드주소를 저장)	
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
//// 리스트에서 노드 p를 삭제하는 연산
//void deleteNode(Node* del)
//{	//1 삭제전 해당 데이터 존재유무 조회
//
//	if (del == NULL)
//		return;
//
//	//2 삭제 전노드의 위치 탐색
//	Node* pre = L;
//	if (pre == NULL) // 노드 0
//	{
//		return NULL;
//	}
//
//	else // 노드 1 이상
//	{
//		if (pre == del) // 삭제 노드가 첫 노드 일때
//		{
//			L = pre->link;
//		}
//		else
//		{
//			while (pre->link != del)
//			{
//				pre = pre->link;
//			}
//			// pre 노드는 del 노드 앞에 있게 됨.
//
//			pre->link = del->link;
//		}
//
//
//	}
//	free(del); // 노드 제거
//
//
//}
//
//
//int main() {
//	Node* p;
//	L = NULL;               //공백 리스트 생성
//
//	// ---------------------------------------------
//	// 데이터 삽입(첫노드)
//	// ---------------------------------------------
//
//	printf("----------(1) 첫노드에 삽입 [월][수] ----------\n");
//	insertFirstNode("수");
//	insertFirstNode("월");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 삽입(끝노드)
//	// ---------------------------------------------
//	printf("\n----------(2) 마지막 노드에 삽입 [목][토][일] ----------\n");
//	insertLastNode("목");
//	insertLastNode("토");
//	insertLastNode("일");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 탐색
//	// ---------------------------------------------
//	printf("\n----------(4) 리스트에서 [금] 노드 탐색하기!----------\n");
//	p = searchNode("금");
//	if (p == NULL)
//		printf("찾는 데이터가 없습니다.\n");
//	else
//		printf("[%s]를 찾았습니다.\n", p->data);
//
//	printf("\n----------(3) 리스트에서 [목] 노드 탐색하기! ----------\n");
//	p = searchNode("목");
//	if (p == NULL)
//		printf("찾는 데이터가 없습니다.\n");
//	else
//		printf("[%s]를 찾았습니다.\n", p->data);
//
//	// ---------------------------------------------
//	// 데이터 삽입 (중간 노드)
//	// ---------------------------------------------
//	printf("\n----------(5) 리스트의 [목] 뒤에 [금] 노드 삽입하기!----------\n");
//	insertMiddleNode(p, "금");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 삭제
//	// ---------------------------------------------
//	printf("\n----------(6) 리스트에서 [일]노드 삭제하기!----------\n");
//	p = searchNode("일");		// 삭제할 노드 위치 p를 찾음
//	deleteNode(p);				// 포인터 p 노드 삭제
//	printList();
//
//	printf("\n----------(7) 리스트에서 [월]노드 삭제하기!----------\n");
//	p = searchNode("월");
//	deleteNode(p);
//	printList();
//
//	printf("\n----------(8) 리스트에서 [목]노드 삭제하기!----------\n");
//	p = searchNode("목");
//	deleteNode(p);
//	printList();
//
//
//	freeLinkedList();               //리스트 메모리 해제
//	return 0;
//}