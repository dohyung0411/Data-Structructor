// 재귀함수
// 함수내에 스스로를 호출하는 코드가 포함되어 있는 함수

//1

//#include <stdio.h>
//void Recur(int num)
//{
//	if (num > 0)
//	{
//		printf("재귀함수 호출! num = %d\n", num);
//		Recur(num - 1); // 재귀호출	
//	}
//}
//int main()
//{
//	Recur(3);
//
//	return 0;
//}


//2 1~10까지 출력

//#include <stdio.h>
//
//int Recur(int num)
//{
//	int sum = 0;
//	if (num > 0)
//	{
//		sum = Recur(num - 1) + num;
//		printf("재귀함수 호출! num = %d\n", num);
//		return sum;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int sum = Recur(10);
//	printf("sum : %d\n", sum);
//	return 0;
//}


// 재귀함수로 별찍기
// *
// **
// ***
// ****

//#include <stdio.h>
//void Recur(int num)
//{
//	if (num > 0)
//	{
//		Recur(num - 1);// 재귀호출	
//		for (int i = 0; i < num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
// return;
//}
//int main()
//{
//	Recur(4);
//
//	return 0;
//}

// ****
// ***
// **
// *

//#include <stdio.h>
//void Recur(int num)
//{
//	if (num > 0)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		Recur(num - 1); // 재귀호출	
//	}
// return;
//}
//int main()
//{
//	Recur(4);
//
//	return 0;
//}

//    *
//   ***
//  *****
// *******


// 사용자에게 10 이하의 정수 n을 하나 입력 받는다.
// n층의 별모양을 출력한다.

//#include <stdio.h>
//void Recur(int num)
//{
//
//	if (num > 0)
//	{
//		Recur(num - 1);// 재귀호출	
//		for (int i = 0; i < num; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return;
//
//}
//int main()
//{
//	int n = 0;
//	printf("10이하의 숫자를 입력해 주십시요.");
//	scanf_s("%d", &n);
//	if (n > 10)
//	{
//		printf("10이하의 숫자를 입력해 주십시요.");
//	}
//	Recur(n);
//
//	return 0;
//}


// 재귀함수 팁
// 1. n단계에 대해서만 확실하게 구현하고, 이전단계들은 적당히 잘 돌아갈거라고 생각하기.
// 2. 재귀함수를 종료하는 조건 ( 재귀함수를 호출하는 조건 )을 명확하게 정하기.

// 이진탐색 함수
// @param
//		int[] arr
//			값을 탐색하기 위한 배열
//    int startIdx
//			배열 내에서 값을 탐색하는 범위의 시작점.
//    int endIdx
//			배열 내에서 값을 탐색하는 범위의 종료점
//    int target
//			우리가 배열 내에서 탐색하고자 하는 값
//	@return
//		if(값을 찾은 경우)
//			해당값이 위치하는 인덱스 값
//		else
//			return -1;
// -> main 함수에서 함수를 호출할때는 범위가 0번째 인덱스 부터 마지막 인덱스 까지.

//#include <stdio.h>
//int BSearch(int* arr, int startIdx, int endIdx, int target)
//{
//	if (startIdx > endIdx)
//		return -1;
//
//	int mid = (startIdx + endIdx) / 2;
//	if (arr[mid] == target)
//	{
//		return  mid;
//		
//	}
//
//	else if (arr[mid] > target)
//	{
//		endIdx = mid - 1;
//		return BSearch(arr, startIdx, endIdx, target);
//	}
//
//	else
//	{
//		startIdx = mid + 1;
//		return BSearch(arr, startIdx, endIdx, target);
//	}
//	
//	
//	
//}
//int main(void)
//{
//	int arr[] = { 1, 3, 5, 7, 9 };
//	int idx;
//
//	idx = BSearch(arr, 0, 4, 8);
//	if (idx == -1)
//	{
//		printf("해당값은 존재하지 않습니다.");
//	}
//	else
//		printf("%d", idx);
//
//	idx = BSearch(arr, 0, 4, 5);
//	if (idx == -1)
//	{
//		printf("해당값은 존재하지 않습니다.");
//	}
//	else
//		printf("%d", idx);
//	return 0;
//}

/*
 1. 중간 인덱스가 어디인지 구한다. -> (start + end) / 2;
 2. target과 중간 인덱스의 값을 비교한다.
	1. target == 중간 인덱스의 값
		우리가 탐색하고자 했던 값을 찾은 경우
		-> return mid;
	2. target > 중간 인덱스의 값
		-> BSearch(arr, mid + 1, end, target);
	3. target < 중간 인덱스의 값
		-> BSearch(arr, start, mid - 1, target);
*/

/*
피보나치 수열
-> 피보나치 수열의 각 항은 바로 앞 두항의 합으로 구할 수 있다.
0 1 1 2 3 5 8 ...

그럼 피보나치 수열의 n번째 항을 구하는 함수를 만들어 보자.
	@param
		int n
			몇번째 항의 값을 구하고 싶은지.
	@return
		n 번째 항의 값
*/

//#include<stdio.h>
//
//int main(void)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", Fibo(i));
//	}
//}