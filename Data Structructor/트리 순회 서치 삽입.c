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



//Ʈ������ġ, ����


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode
//{
//	char key;				// ������ �ʵ�
//	struct treeNode* left;	// ���� ���� Ʈ�� ��ũ �ʵ�
//	struct treeNode* right;	// ������ ���� Ʈ�� ��ũ �ʵ�
//}treeNode;
//
//treeNode* root = NULL;
//
//
////Ž�� �Լ�
//
//treeNode* search(char x)
//{
//
//	treeNode* p = root;	// 1 ���۳�� �ּ� *p �� ����
//
//	while (p != NULL)		// 2 p�� NULL�϶����� ��� �ݺ�
//	{
//		if (p->key == x)	// 3 p->key�� x �� �� 
//		{
//
//			return p;
//		}
//
//		else if (p->key > x)	// 3 p->key�� x �� �� 
//		{
//			p = p->left;
//		}
//
//		else		// 3 p->key�� x �� �� 
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
//// ��� ���� �Լ� 
//void insertNode(char x)
//{
//	//0 ������ Ű�� ���翩�� Ȯ�� 
//	if (search(x) != NULL)
//	{
//		printf("������ KEY�� �����մϴ�.�������� �Ұ��� �մϴ�.");
//		return;
//	}
//
//	//1 ��� ����
//	//2 �� �ֱ�
//	//3 ��ũ �ʱ�ȭ
//
//	treeNode* new = (treeNode*)malloc(sizeof(treeNode));
//	if (new == NULL)
//		return;
//	new->key = x;
//	new->left = NULL;
//	new->right = NULL;
//
//	if (root == NULL)	//4 ��尡 ���ٸ�
//	{
//		root = new;
//	}
//
//	else  //5 ��尡 �ִٸ� �θ����� ��ġ Ž��
//	{
//		treeNode* cur = root; // ������ ��ġ Ž����
//		treeNode* pre = NULL; // ������ ��ġ �θ� Ž����
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
//		// while�� ��������� cur==NULL �̰� pre���� ������ �θ��� ��ġ�� Ž���Ǿ� ���� ����.
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
//	//5-1 �θ��尡 root��� 
//	//5-2 �θ��尡 root�� �ƴ϶��
//
//}
//
//// ��� ���� �Լ� 
//void deleteNode(char key)
//{
//
//}
//
//// ���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
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
//	printf("\n\t1 : Ʈ�� ���");
//	printf("\n\t2 : ���� ����");
//	printf("\n\t3 : ���� ����");
//	printf("\n\t4 : ���� �˻�");
//	printf("\n\t5 : ����");
//	printf("\n*---------------------------*");
//	printf("\n�޴��Է� >> ");
//}
//
//int main() {
//	treeNode* foundedNode = NULL;
//	char choice, key;
//
//	// [�׸� 7-38]�� ���� �ʱ� ���� Ž�� Ʈ���� �����ϰ�
//	// ��� G�� ��Ʈ ��� ������ root�� ����
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
//			//			printf("\t[���� Ʈ�� ���]  ");
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 2:
//			printf("������ ���ڸ� �Է��ϼ��� : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			insertNode(key);
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 3:
//			printf("������ ���ڸ� �Է��ϼ��� : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			deleteNode(key);
//			displayInorder(root);  printf("\n");
//			break;
//
//		case 4:
//			printf("ã�� ���ڸ� �Է��ϼ��� : ");
//			fflush(stdout);
//			scanf_s(" %c", &key, sizeof(key));
//			foundedNode = search(key);
//			if (foundedNode != NULL)
//				printf("\n %c�� ã�ҽ��ϴ�! \n", foundedNode->key);
//			else
//				printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
//			break;
//
//		case 5:
//			return 0;
//
//		default:
//			printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���! \n");
//			break;
//		}
//	}
//	return 0;
//
//}
