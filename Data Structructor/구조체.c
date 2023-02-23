// 01 구조체 기본

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
//	// 구조체 기본
//	struct person Lee = { "이지성", 35,67.5,177.5 };
//	printf("%s %d %f %lf\n", Lee.name, Lee.age, Lee.weight, Lee.height);
//
//	//typedef 사용
//	Person Lee2 = { "이지성", 35,67.5,177.5 };
//	printf("%s %d %f %lf\n", Lee2.name, Lee2.age, Lee2.weight, Lee2.height);
//
//	// 구조체 포인터 사용
//	Person* ptr = &Lee;
//	printf("멤버 접근 - 이름 : %s\n", (*ptr).name);
//	printf("멤버 접근 - 나이 : %d\n", (*ptr).age);
//	return 0;
//}

// 02 동적할당 + 포인터 + 구조체
//Node(저장단위) 생성후 값저장

//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//struct node 
//{
//   char data[20];
//   struct node* next; //자기참조 구조체포인터(다른 노드를 연결하기 위한 구조체포인터)
//}typedef Node;
//
//Node* createNode(char* data) {
//   Node* new = (Node*)malloc(sizeof(Node));  //노드생성
//   if (new == NULL)  //NULL체크
//      return -1;
//   //new->data = "홍길동"; //안되는이유...?? 어제 했던 겁니다~
//   strcpy_s(new->data, sizeof(new->data), data);  //데이터 저장
//   new->next = NULL;    //현재 연결할 다음노드가 없기때문에 NULL
//   return new;       //할당공간의 주소 리턴
//}
//int main()
//{
//   Node* n1 = createNode("홍길동");
//   Node* n2 = createNode("다리우스");
//   Node* n3 = createNode("아무무");
//   printf("n1->data  : %s \n", n1->data);
//   printf("n2->data  : %s \n", n2->data);
//
//
//   n1->next = n2; // n1 -> n2 연결 
//   n2->next = n3; // n2 -> n3 연결
//   //n1->n2->n3
//   Node* cur = n1;
//   while (cur!=NULL)
//   {
//      printf("DATA : %s\n", cur->data);
//      cur = cur->next; //다음노드주소 cur저장
//   }
//
//   return 0;
//}
