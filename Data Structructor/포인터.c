// 포인터

//int main()
//{
//	char c = 'a'; // 'a' 값을 char 크기 공간 c 변수에 초기화
//	char* pc;     // char 크기를 가리킬 수 있는 pc 포인터 정의.
//	pc = &c;      // c변수의 메모리 주소값을 pc포인터 공간에 대입.
//	printf("%c\n", *pc); // pc에 있는 주소값(c)에 가서 그 값('a')을 출력.
//	*pc = 'b';    // 'b'값을 pc포인터가 가리키는 공간에 대입. 
//	printf("%c\n", c); // 그리고 c의 값을 출력.
//
//	return 0;
//}

//포인터 배열

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

// 포인터 함수

// Call-By-Value - 함수 호출시 데이터 값

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
//	printf("Swap 전 a = %d , b = %d\n", a, b);
//	Swap(a, b); //Call-By-Value
//	printf("Swap 후 a = %d , b = %d\n", a, b);
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
//	printf("Swap 전 a = %d , b = %d\n", a, b);
//	Swap(&a, &b); //Call-By-Value
//	printf("Swap 후 a = %d , b = %d\n", a, b);
//
//	return 0;
//
//}

// 포인터와 문자열

//#include <stdio.h>
//
//int main()
//{
//	char arr[20] = "hello World"; // 배열공간을 따로 만듬.
//	char* ptr1 = "hello World";
//	char* ptr2 = "hello World";
//
//	printf("arr배열의 주소 : %p\n", arr); // 배열의 이름의 주소
//	printf("hello World의 주소 : %p\n", "hello World");
//	printf("ptr1안의 주소 : %p\n", ptr1); // "hello World"의 주소
//	printf("ptr2안의 주소 : %p\n", ptr2); // "hello World"의 주소
//	return 0;
//}

//포인터 포인터

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

