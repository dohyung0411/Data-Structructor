// 트리순회


//// 이진트리의 순회
//
//// 전위 순회 - D -> L -> R
//// 중위 순회 - L -> D -> R
//// 후위 순회 - L -> R -> D
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode {	// 연결 자료구조로 구성하기 위해 트리의 노드 정의
//	char data;
//	struct treeNode* left;  // 왼쪽 서브 트리에 대한 링크 필드
//	struct treeNode* right; // 오른쪽 서브 트리에 대한 링크 필드
//} TreeNode;
//
//TreeNode* makeRootNode(char data, TreeNode* leftNode, TreeNode* rightNode) {
//
//	TreeNode* new = (TreeNode*)malloc(sizeof(TreeNode));
//	if (new == NULL)
//	{
//		return NULL;
//	}
//	new->data = data;
//	new->left =	leftNode;
//	new->right = rightNode;
//
//
//
//}
//// 이진 트리에 대한 전위 순회 연산
//void preorder(TreeNode* root) 
//{ //전위 순회 결과 - '-' -> '*' -> 'A' -> 'B' -> '/' -> 'C' -> 'D'
//
//	if (root != NULL)
//	{
//		printf("'%c' ", root->data); // 데이터 처리
//		preorder(root->left);   // 왼쪽 이동 
//		preorder(root->right);  // 오른쪽 이동
//	}
//	
//}
//// 이진 트리에 대한 중위 순회 연산
//void inorder(TreeNode* root) 
//{ // 중위 순회 결과 - 'A' -> '*' -> 'B' -> '-' -> 'C' -> '/' -> 'D'
//
//	if (root != NULL)
//	{
//		inorder(root->left);   // 왼쪽 이동 
//		printf("'%c' ", root->data); // 데이터 처리
//		inorder(root->right);  // 오른쪽 이동
//	}
//}
//// 이진 트리에 대한 후위 순회 연산
//void postorder(TreeNode* root) 
//{ // - 'a b * c D / -
//
//	if (root != NULL)
//	{
//		postorder(root->left);   // 왼쪽 이동 
//		postorder(root->right);  // 오른쪽 이동
//		printf("'%c' ", root->data); // 데이터 처리
//	}
//}
//int main()
//{
//	TreeNode* n7 = makeRootNode('D', NULL, NULL);
//	TreeNode* n6 = makeRootNode('C', NULL, NULL);
//	TreeNode* n5 = makeRootNode('B', NULL, NULL);
//	TreeNode* n4 = makeRootNode('A', NULL, NULL);
//	TreeNode* n3 = makeRootNode('/', n6, n7);
//	TreeNode* n2 = makeRootNode('*', n4, n5);
//	TreeNode* n1 = makeRootNode('-', n2, n3);
//
//
//	printf("preorder : ");
//	preorder(n1);
//	printf("\n");
//	printf("\ninorder : ");
//	inorder(n1);
//	printf("\n");
//	printf("\npostorder : ");
//	postorder(n1);
//	printf("\n");
//	return 0;
//
//}



//트리　서치, 삽입


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode
//{
//	char key;				// 데이터 필드
//	struct treeNode* left;	// 왼쪽 서브 트리 링크 필드
//	struct treeNode* right;	// 오른쪽 서브 트리 링크 필드
//}treeNode;
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
//	return p;  // return NULL;
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
