// 01 ����ü �⺻

//#include <stdio.h>
//
//struct person
//{
//	char name[30];
//	int age;
//	float weight;
//	double height;
//}typedef Person;
//
//int main()
//{
//	// ����ü �⺻
//	struct person Lee = { "������", 35,67.5,177.5 };
//	printf("%s %d %f %lf\n", Lee.name, Lee.age, Lee.weight, Lee.height);
//
//	//typedef ���
//	Person Lee2 = { "������", 35,67.5,177.5 };
//	printf("%s %d %f %lf\n", Lee2.name, Lee2.age, Lee2.weight, Lee2.height);
//
//	// ����ü ������ ���
//	Person* ptr = &Lee;
//	printf("��� ���� - �̸� : %s\n", (*ptr).name);
//	printf("��� ���� - ���� : %d\n", (*ptr).age);
//	return 0;
//}

// 02 �����Ҵ� + ������ + ����ü
//Node(�������) ������ ������

//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//struct node 
//{
//   char data[20];
//   struct node* next; //�ڱ����� ����ü������(�ٸ� ��带 �����ϱ� ���� ����ü������)
//}typedef Node;
//
//Node* createNode(char* data) {
//   Node* new = (Node*)malloc(sizeof(Node));  //������
//   if (new == NULL)  //NULLüũ
//      return -1;
//   //new->data = "ȫ�浿"; //�ȵǴ�����...?? ���� �ߴ� �̴ϴ�~
//   strcpy_s(new->data, sizeof(new->data), data);  //������ ����
//   new->next = NULL;    //���� ������ ������尡 ���⶧���� NULL
//   return new;       //�Ҵ������ �ּ� ����
//}
//int main()
//{
//   Node* n1 = createNode("ȫ�浿");
//   Node* n2 = createNode("�ٸ��콺");
//   Node* n3 = createNode("�ƹ���");
//   printf("n1->data  : %s \n", n1->data);
//   printf("n2->data  : %s \n", n2->data);
//
//
//   n1->next = n2; // n1 -> n2 ���� 
//   n2->next = n3; // n2 -> n3 ����
//   //n1->n2->n3
//   Node* cur = n1;
//   while (cur!=NULL)
//   {
//      printf("DATA : %s\n", cur->data);
//      cur = cur->next; //��������ּ� cur����
//   }
//
//   return 0;
//}
