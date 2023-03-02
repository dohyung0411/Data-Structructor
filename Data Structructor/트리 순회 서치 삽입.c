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




