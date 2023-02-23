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

// ****
// ***
// **
// *

//    *
//   ***
//  *****
// *******
