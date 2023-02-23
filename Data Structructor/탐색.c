//#include<stdio.h>


// 탐색

// 순차 탐색

//int LSearch(int* ar, int len, int target) // ar : main 함수 arr을 가리키는 포인터
//{                                         // len : 배열의 길이
//														// target : 찾을 데이터
//	// 배열의 0번째에서 마지막 요소까지 차례로 이동하면서
//	//target과 일치하는 데이터가 있는지 확인후 존재한다면
//	//해당요소의 idx값을 return 합니다.
//	//target과 일치하는 데이터가 없을땐 -1을 return 합니다.
//
//	for (int i = 0; i <= len; i++) // 배열의 0번째에서 마지막 요소까지 차례로 이동하면서
//	{/*
//		if (*ar == target)
//		{
//			return *ar;
//		}
//
//		else
//		{
//		ar = ar + 1;
//		}
//
//		if (i == len)
//		{
//			return -1;
//		}*/
//
//		if (ar[i] == target) //target과 일치하는 데이터가 있는지 확인후 존재한다면
//		{
//			return i;			//해당요소의 idx값을 return 합니다.
//		}
//		return -1;				//target과 일치하는 데이터가 없을땐 -1을 return 합니다.
//	}
//}

//int main()
//{
//	int arr[] = { 3,5,2,4,9 };
//	int idx;
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//
//	return 0;
//
//
//}


// 이진 탐색(정렬된 데이터에만 적용)

//int LSearch(int* ar, int len, int target) // ar : main 함수 arr을 가리키는 포인터
//{                                         // len : 배열의 길이
//														// target : 찾을 데이터
//	
//	int first = 0;									
//	int last = len - 1;							
//	int mid = 0;									
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2;
//		if (ar[mid] == target)// mid 위치 요소값과 찾을값이 일치하는 경우
//		{
//			return mid;        // mid index return;
//		}
//
//		else if (ar[mid] > target) // mid 위치 요소값이 찾을값보다 큰경우 (mid 이전위치에 찾을값이 존재)
//		{
//			last = mid - 1;         // last를 mid 이전으로 이동.
//		}
//
//		else
//			first = mid + 1; 
//	}
//	return -1; // 찾는값이 없을경우 -1 return;
//
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,11,13,15 }; // 8칸 배열 + 정렬되어야 한다(오름정렬)
// 	int idx;
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//
//	return 0;
//
//}

// 시간 복잡도
// 프로그램(함수)의 실행시간이 얼마나 걸리는지를 나타내는 표현방식.
// 함수의 실행시간을 표현
// 점근적 접근법을 통해 실행시간을 단순하게 표현.
// 실행시간 : 함수 / 알고리즘 수행에 필요한 스텝(step) 수 

//#include <stdio.h>
//#include <stdlib.h>
//int* multiply(int size)
//{
//	int* newNode = (int*)malloc(sizeof(int) * size);
//	if (newNode == NULL)
//		return NULL;
//	for (int i = 0; i < size; i++)
//	{
//		newNode[i] = i;
//	}
//	return newNode;
//}
//
//int main()
//{
//	int* arr = multiply(10);
//
//	return 0;
//}

//-------------------------------------
//cost			times
//
//c1		x			1											int* newNode = (int*)malloc(sizeof(int) * size);
//c2		x			1											if (newNode == NULL)
//c3		x			0,1											return NULL;
//c4		x			N											for (int i = 0; i < size; i++)
//																{
//c5		x			N												newNode[i] = i;
//																}
//c6		x			1											return newNode;
//-------------------------------------------------------------
//T(N) = c1 + c2 + c3 N*c4 = N*c5 = c6
//T(N) = (c4 + c5)N + c1 + c2 + c3 + c6
//T(N) = a*N + b
//T(N) = N (N - 무한대로 가정)
// input 된 값에 비례해서 시간소모가 일어난다.
// θ(N) - 점근적 접근법 표현
// 점근적 접근법 : 임의의 함수에 N이 무한대일 경우를 가정해서 어떤 형태에 근접하는지를 분석.

// 최선의 경우
// 최악의 경우
// 평균의 경우
// 탐색알고리즘 기준

//case					when							times
//	best case		 0								  1
//	worst case		 마지막 or 미존재			  n
//
//표현방식
//best	case - lower bound 방식(하한선) - 아무리 빨라도 상수시간 이상이다. - Ω(1) (빅오메가)
//worst case - upper bound 방식(상한선) - 아무리 느려도 n에 비례하는 정도 이하이다 - Ο(N)
//
//case    best     worst		avg
//Ω        Ω(1)		Ω(N)		 
//Ο			Ο(1)		Ο(N)		Ο(N)			T(N) = N/2 -> N
//θ			θ(1)		θ(1)


// 이진탐색

//1회차 : 8칸 
//2회차 : 4칸 1/2
//3회차 : 2칸 1/4
//4회차 : 1칸 1/8
//[Worst Case]
//-1번째 실행 반복 검색 사이즈가 1/2(8->4)로 줄어든다.
//-2번째 실행 반복 검색 사이즈가 1/2(4->2)로 줄어든다.
//-3번째 실행 반복 검색 사이즈가 1/2(2->1)로 줄어든다.
//-몇번만에 검색 사이즈가 1이 되는지
//
//input size N이라고 가정
//= N*(1/2)^k = 1
//= N/2^k = 1
//= N + 2^k 
//= log2N = log22^k
//= log2N = k
//= θ(logN)


// Ο(1) < Ο(logN) < Ο(N) < Ο(N*logN) < Ο(N^2) < Ο(2^N) < Ο(N!)

// 순차 Ο(N)
// 이진 Ο(logN)














