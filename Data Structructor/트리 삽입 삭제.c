// 트리 삽입 삭제

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode
//{
//	char key;				// 데이터 필드
//	struct treeNode* left;	// 왼쪽 서브 트리 링크 필드
//	struct treeNode* right;	// 오른쪽 서브 트리 링크 필드
//} treeNode;
//
//treeNode* root = NULL;
//
//
////탐색 함수
//
//treeNode* search(char x)
//{
//
//	treeNode* p = root;	// 1 시작노드 주소 *p 로 받음
//
//	while (p != NULL)		// 2 p가 NULL일때까지 계속 반복
//	{
//		if (p->key == x)	// 3 p->key와 x 를 비교 
//		{
//			
//			return p;
//		}
//
//		else if (p->key > x)	// 3 p->key와 x 를 비교 
//		{
//			p = p->left;
//		}
//
//		else		// 3 p->key와 x 를 비교 
//		{
//			p = p->right;
//		}
//	}
//
//	return NULL;  // return NULL;
//
//
//}
//
//// 노드 삽입 함수 
//void insertNode(char x) 
//{
//	//0 동일한 키값 존재여부 확인 
//	if (search(x) != NULL)
//	{
//		printf("동일한 KEY가 존재합니다.노드삽입이 불가능 합니다.");
//		return;
//	}
//
//	//1 노드 생성
//	//2 값 넣기
//	//3 링크 초기화
//	
//	treeNode* new = (treeNode*)malloc(sizeof(treeNode));
//	if (new == NULL)
//		return;
//	new->key = x;
//	new->left = NULL;
//	new->right = NULL;
//
//	if (root == NULL)	//4 노드가 없다면
//	{
//		root = new;
//	}
//
//	else  //5 노드가 있다면 부모노드의 위치 탐색
//	{
//		treeNode* cur = root; // 삽입할 위치 탐색용
//		treeNode* pre = NULL; // 삽입할 위치 부모 탐색용
//
//		while (cur != NULL)
//		{
//			if (cur->key > x)
//			{
//				pre = cur;
//				cur = cur->left;
//			}
//
//			else
//			{
//				pre = cur;
//				cur = cur->right;
//			}
//		}
//		// while을 벗어났을때는 cur==NULL 이고 pre에는 삽입할 부모노드 위치가 탐색되어 지는 상태.
//
//		if (pre->key > x)
//		{
//			pre->left = new;
//		}
//
//		else
//		{
//			pre->right = new;
//		}
//
//	}
//
//	
//	//5-1 부모노드가 root라면 
//	//5-2 부모노드가 root가 아니라면
//
//}
//
//// 노드 삭제 함수 
//void deleteNode(char key)
//{
//	// 노드가 있는지 여부 확인
//	if (root == NULL)
//		return;
//
//	// 삭제할 노드 탐색
//	if (search(key) == NULL)
//		return;
//
//	// 삭제할 노드의 부모노드 찾기.
//	treeNode* cur = root;
//	treeNode* par = NULL;
//
//	while (cur->key != key)
//	{
//		par = cur;
//		if (cur->key > key)
//		{
//			cur = cur->left;
//		}
//
//		else // cur->key < key
//		{
//			cur = cur->right;
//		}
//	}
//
//	// cur는 삭제 노드위치, par는 삭제 부모노드 위치
//
//	if (cur->left == NULL && cur->right == NULL) // // 삭제노드 자식x // cur->left == NULL cur-> right == NULL
//	{
//		// par == NULL인 경우를 고려(삭제노드가 root인 경우)
//		
//		if (par == NULL)
//		{
//			root = NULL;
//		}
//		else
//		{
//			if (par->left == cur)
//			{
//				par->left = NULL;
//			}
//			else
//			{
//				par->right = NULL;				
//			}
//		}
//		free(cur);
//	}
//
//	else if (cur->left == NULL || cur->right == NULL) // 삭제노드의 자식 1개 // cur->left == NULL cur->right != NULL  // cur->left != NULL cur-> right == NULL
//	{
//		if (par == NULL) // 삭제 위치가 root인 경우
//		{
//			if (cur->left != NULL)
//			{
//				root = cur->left;
//				free(cur);
//			}
//
//			else
//			{
//				root = cur->right;
//				free(cur);
//			}
//		
//		}
//
//		else
//		{
//			treeNode* son = NULL;
//			if (cur->left != NULL)
//				son = cur->left;
//			else
//				son = cur->right;
//
//			if (cur->key > par->key)
//			{
//				par->right = son;
//			}
//			else
//			{
//				par->left = son;
//			}
//		}
//	}
//
//	else // 삭제노드의 자식 2개 // cur->left != NULL cur->right != NULL
//	{
//		treeNode* succ_par = cur; // 후보노드의 부모 조회용
//		treeNode* succ = cur->left; // 후보노드 조회용
//
//		while (succ->right != NULL)
//		{
//			succ_par = succ;
//			succ = succ->right;
//		}
//
//		//반복을 한번도 하지 않은 경우
//		if (succ_par->left == succ)
//		{
//			cur->key = succ->key;
//			cur->left = succ->left;
//			free(succ);
//		}
//		else
//		{
//			succ_par->right = succ->left;
//			cur->key = succ->key;
//			free(succ);
//		}
//	}
//
//}
//
//// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
//void displayInorder(treeNode* cur) {
//	if (cur) {
//		displayInorder(cur->left);
//		printf("%c_", cur->key);
//		displayInorder(cur->right);
//	}
//}
//
//void menu() {
//	printf("\n*---------------------------*");
//	printf("\n\t1 : 트리 출력");
//	printf("\n\t2 : 문자 삽입");
//	printf("\n\t3 : 문자 삭제");
//	printf("\n\t4 : 문자 검색");
//	printf("\n\t5 : 종료");
//	printf("\n*---------------------------*");
//	printf("\n메뉴입력 >> ");
//}
//
//int main() {
//	treeNode* foundedNode = NULL;
//	char choice, key;
//
//	// [그림 7-38]과 같은 초기 이진 탐색 트리를 구성하고
//	// 노드 G를 루트 노드 포인터 root로 지정
//	/*for (int i = 'A'; i <= 'Z'; i++)
//	{
//		insertNode(i);
//	}*/
//
//	insertNode('G');
//	insertNode('I');
//	insertNode('H');
//	insertNode('C');
//	insertNode('B');
//	insertNode('M');
//	insertNode('N');
//	insertNode('A');
//	insertNode('J');
//	insertNode('E');
//	insertNode('D');
//	insertNode('Q');
//
//
//
//	while (1) 
//	{
//		menu();
//		fflush(stdout);
//		scanf_s(" %c", &choice, sizeof(choice));
//
//		switch (choice - '0') {
//		case 1:
//			//			printf("\t[이진 트리 출력]  ");
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 2:
//			printf("삽입할 문자를 입력하세요 : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			insertNode(key);
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 3:
//			printf("삭제할 문자를 입력하세요 : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			deleteNode(key);
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 4:
//			printf("찾을 문자를 입력하세요 : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			foundedNode = search(key);
//			if (foundedNode != NULL)
//				printf("\n %c를 찾았습니다! \n", foundedNode->key);
//			else
//				printf("\n 문자를 찾지 못했습니다. \n");
//			break;
//
//		case 5:
//			return 0;
//
//		default:
//			printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
//			break;
//		}
//	}
//	return 0;
//
//}
//
//
//
//
//
