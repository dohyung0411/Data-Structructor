// Ʈ�� ���� ����

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct treeNode
//{
//	char key;				// ������ �ʵ�
//	struct treeNode* left;	// ���� ���� Ʈ�� ��ũ �ʵ�
//	struct treeNode* right;	// ������ ���� Ʈ�� ��ũ �ʵ�
//} treeNode;
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
//	return NULL;  // return NULL;
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
//	// ��尡 �ִ��� ���� Ȯ��
//	if (root == NULL)
//		return;
//
//	// ������ ��� Ž��
//	if (search(key) == NULL)
//		return;
//
//	// ������ ����� �θ��� ã��.
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
//	// cur�� ���� �����ġ, par�� ���� �θ��� ��ġ
//
//	if (cur->left == NULL && cur->right == NULL) // // ������� �ڽ�x // cur->left == NULL cur-> right == NULL
//	{
//		// par == NULL�� ��츦 ���(������尡 root�� ���)
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
//	else if (cur->left == NULL || cur->right == NULL) // ��������� �ڽ� 1�� // cur->left == NULL cur->right != NULL  // cur->left != NULL cur-> right == NULL
//	{
//		if (par == NULL) // ���� ��ġ�� root�� ���
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
//	else // ��������� �ڽ� 2�� // cur->left != NULL cur->right != NULL
//	{
//		treeNode* succ_par = cur; // �ĺ������ �θ� ��ȸ��
//		treeNode* succ = cur->left; // �ĺ���� ��ȸ��
//
//		while (succ->right != NULL)
//		{
//			succ_par = succ;
//			succ = succ->right;
//		}
//
//		//�ݺ��� �ѹ��� ���� ���� ���
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
//
//
//
//
//
