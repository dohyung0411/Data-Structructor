// ������

//int main()
//{
//	char c = 'a'; // 'a' ���� char ũ�� ���� c ������ �ʱ�ȭ
//	char* pc;     // char ũ�⸦ ����ų �� �ִ� pc ������ ����.
//	pc = &c;      // c������ �޸� �ּҰ��� pc������ ������ ����.
//	printf("%c\n", *pc); // pc�� �ִ� �ּҰ�(c)�� ���� �� ��('a')�� ���.
//	*pc = 'b';    // 'b'���� pc�����Ͱ� ����Ű�� ������ ����. 
//	printf("%c\n", c); // �׸��� c�� ���� ���.
//
//	return 0;
//}

//������ �迭

//void main()
//{
//   int arr1[3] = { 1,2,3 };
//  
//   printf("%d\n", *arr1);
//   printf("%d\n", *(arr1 + 1));
//   printf("%d\n", *(arr1 + 2));
//
//   *arr1 += 100;
//
//
//   int* ptr = arr1;  // int * ptr = &arr1[0];
//   printf("%d\n", *ptr);
//   printf("%d\n", *(ptr + 1));
//   printf("%d\n", *(ptr + 2));
//   printf("%d\n", ptr[0]);
//   printf("%d\n", ptr[1]);
//   printf("%d\n", ptr[2]);
//
//
//   
//   printf("%d\n", arr1[0]);
//}

// ������ �Լ�

// Call-By-Value - �Լ� ȣ��� ������ ��

//#include <stdio.h>
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Swap �� a = %d , b = %d\n", a, b);
//	Swap(a, b); //Call-By-Value
//	printf("Swap �� a = %d , b = %d\n", a, b);
//
//	return 0;
//
//}

// Call-By-Adress

//#include <stdio.h>
//void Swap(int *x, int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Swap �� a = %d , b = %d\n", a, b);
//	Swap(&a, &b); //Call-By-Value
//	printf("Swap �� a = %d , b = %d\n", a, b);
//
//	return 0;
//
//}

// �����Ϳ� ���ڿ�

//#include <stdio.h>
//
//int main()
//{
//	char arr[20] = "hello World"; // �迭������ ���� ����.
//	char* ptr1 = "hello World";
//	char* ptr2 = "hello World";
//
//	printf("arr�迭�� �ּ� : %p\n", arr); // �迭�� �̸��� �ּ�
//	printf("hello World�� �ּ� : %p\n", "hello World");
//	printf("ptr1���� �ּ� : %p\n", ptr1); // "hello World"�� �ּ�
//	printf("ptr2���� �ּ� : %p\n", ptr2); // "hello World"�� �ּ�
//	return 0;
//}

//������ ������

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//
//	int** dptr = &ptr1;
//	printf("dptr : %p *dptr : %p **dptr : %d\n", dptr, *dptr, **dptr);
//	printf("ptr1 : %p *ptr:%d\n", ptr1, *ptr1);
//
//	return 0;
//}

