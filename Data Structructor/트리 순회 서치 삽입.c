// Ʈ����ȸ


//// ����Ʈ���� ��ȸ
//
//// ���� ��ȸ - D -> L -> R
//// ���� ��ȸ - L -> D -> R
//// ���� ��ȸ - L -> R -> D
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode {	// ���� �ڷᱸ���� �����ϱ� ���� Ʈ���� ��� ����
//	char data;
//	struct treeNode* left;  // ���� ���� Ʈ���� ���� ��ũ �ʵ�
//	struct treeNode* right; // ������ ���� Ʈ���� ���� ��ũ �ʵ�
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
//// ���� Ʈ���� ���� ���� ��ȸ ����
//void preorder(TreeNode* root) 
//{ //���� ��ȸ ��� - '-' -> '*' -> 'A' -> 'B' -> '/' -> 'C' -> 'D'
//
//	if (root != NULL)
//	{
//		printf("'%c' ", root->data); // ������ ó��
//		preorder(root->left);   // ���� �̵� 
//		preorder(root->right);  // ������ �̵�
//	}
//	
//}
//// ���� Ʈ���� ���� ���� ��ȸ ����
//void inorder(TreeNode* root) 
//{ // ���� ��ȸ ��� - 'A' -> '*' -> 'B' -> '-' -> 'C' -> '/' -> 'D'
//
//	if (root != NULL)
//	{
//		inorder(root->left);   // ���� �̵� 
//		printf("'%c' ", root->data); // ������ ó��
//		inorder(root->right);  // ������ �̵�
//	}
//}
//// ���� Ʈ���� ���� ���� ��ȸ ����
//void postorder(TreeNode* root) 
//{ // - 'a b * c D / -
//
//	if (root != NULL)
//	{
//		postorder(root->left);   // ���� �̵� 
//		postorder(root->right);  // ������ �̵�
//		printf("'%c' ", root->data); // ������ ó��
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




