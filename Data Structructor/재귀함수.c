// ����Լ�
// �Լ����� �����θ� ȣ���ϴ� �ڵ尡 ���ԵǾ� �ִ� �Լ�

//1

//#include <stdio.h>
//void Recur(int num)
//{
//	if (num > 0)
//	{
//		printf("����Լ� ȣ��! num = %d\n", num);
//		Recur(num - 1); // ���ȣ��	
//	}
//}
//int main()
//{
//	Recur(3);
//
//	return 0;
//}


//2 1~10���� ���

//#include <stdio.h>
//
//int Recur(int num)
//{
//	int sum = 0;
//	if (num > 0)
//	{
//		sum = Recur(num - 1) + num;
//		printf("����Լ� ȣ��! num = %d\n", num);
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


// ����Լ��� �����
// *
// **
// ***
// ****

//#include <stdio.h>
//void Recur(int num)
//{
//	if (num > 0)
//	{
//		Recur(num - 1);// ���ȣ��	
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
//		Recur(num - 1); // ���ȣ��	
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


// ����ڿ��� 10 ������ ���� n�� �ϳ� �Է� �޴´�.
// n���� ������� ����Ѵ�.

//#include <stdio.h>
//void Recur(int num)
//{
//
//	if (num > 0)
//	{
//		Recur(num - 1);// ���ȣ��	
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
//	printf("10������ ���ڸ� �Է��� �ֽʽÿ�.");
//	scanf_s("%d", &n);
//	if (n > 10)
//	{
//		printf("10������ ���ڸ� �Է��� �ֽʽÿ�.");
//	}
//	Recur(n);
//
//	return 0;
//}


// ����Լ� ��
// 1. n�ܰ迡 ���ؼ��� Ȯ���ϰ� �����ϰ�, �����ܰ���� ������ �� ���ư��Ŷ�� �����ϱ�.
// 2. ����Լ��� �����ϴ� ���� ( ����Լ��� ȣ���ϴ� ���� )�� ��Ȯ�ϰ� ���ϱ�.

// ����Ž�� �Լ�
// @param
//		int[] arr
//			���� Ž���ϱ� ���� �迭
//    int startIdx
//			�迭 ������ ���� Ž���ϴ� ������ ������.
//    int endIdx
//			�迭 ������ ���� Ž���ϴ� ������ ������
//    int target
//			�츮�� �迭 ������ Ž���ϰ��� �ϴ� ��
//	@return
//		if(���� ã�� ���)
//			�ش簪�� ��ġ�ϴ� �ε��� ��
//		else
//			return -1;
// -> main �Լ����� �Լ��� ȣ���Ҷ��� ������ 0��° �ε��� ���� ������ �ε��� ����.

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
//		printf("�ش簪�� �������� �ʽ��ϴ�.");
//	}
//	else
//		printf("%d", idx);
//
//	idx = BSearch(arr, 0, 4, 5);
//	if (idx == -1)
//	{
//		printf("�ش簪�� �������� �ʽ��ϴ�.");
//	}
//	else
//		printf("%d", idx);
//	return 0;
//}

/*
 1. �߰� �ε����� ������� ���Ѵ�. -> (start + end) / 2;
 2. target�� �߰� �ε����� ���� ���Ѵ�.
	1. target == �߰� �ε����� ��
		�츮�� Ž���ϰ��� �ߴ� ���� ã�� ���
		-> return mid;
	2. target > �߰� �ε����� ��
		-> BSearch(arr, mid + 1, end, target);
	3. target < �߰� �ε����� ��
		-> BSearch(arr, start, mid - 1, target);
*/

/*
�Ǻ���ġ ����
-> �Ǻ���ġ ������ �� ���� �ٷ� �� ������ ������ ���� �� �ִ�.
0 1 1 2 3 5 8 ...

�׷� �Ǻ���ġ ������ n��° ���� ���ϴ� �Լ��� ����� ����.
	@param
		int n
			���° ���� ���� ���ϰ� ������.
	@return
		n ��° ���� ��
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