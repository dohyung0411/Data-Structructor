//#include<stdio.h>


// Ž��

// ���� Ž��

//int LSearch(int* ar, int len, int target) // ar : main �Լ� arr�� ����Ű�� ������
//{                                         // len : �迭�� ����
//														// target : ã�� ������
//	// �迭�� 0��°���� ������ ��ұ��� ���ʷ� �̵��ϸ鼭
//	//target�� ��ġ�ϴ� �����Ͱ� �ִ��� Ȯ���� �����Ѵٸ�
//	//�ش����� idx���� return �մϴ�.
//	//target�� ��ġ�ϴ� �����Ͱ� ������ -1�� return �մϴ�.
//
//	for (int i = 0; i <= len; i++) // �迭�� 0��°���� ������ ��ұ��� ���ʷ� �̵��ϸ鼭
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
//		if (ar[i] == target) //target�� ��ġ�ϴ� �����Ͱ� �ִ��� Ȯ���� �����Ѵٸ�
//		{
//			return i;			//�ش����� idx���� return �մϴ�.
//		}
//		return -1;				//target�� ��ġ�ϴ� �����Ͱ� ������ -1�� return �մϴ�.
//	}
//}

//int main()
//{
//	int arr[] = { 3,5,2,4,9 };
//	int idx;
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//
//	return 0;
//
//
//}


// ���� Ž��(���ĵ� �����Ϳ��� ����)

//int LSearch(int* ar, int len, int target) // ar : main �Լ� arr�� ����Ű�� ������
//{                                         // len : �迭�� ����
//														// target : ã�� ������
//	
//	int first = 0;									
//	int last = len - 1;							
//	int mid = 0;									
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2;
//		if (ar[mid] == target)// mid ��ġ ��Ұ��� ã������ ��ġ�ϴ� ���
//		{
//			return mid;        // mid index return;
//		}
//
//		else if (ar[mid] > target) // mid ��ġ ��Ұ��� ã�������� ū��� (mid ������ġ�� ã������ ����)
//		{
//			last = mid - 1;         // last�� mid �������� �̵�.
//		}
//
//		else
//			first = mid + 1; 
//	}
//	return -1; // ã�°��� ������� -1 return;
//
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,11,13,15 }; // 8ĭ �迭 + ���ĵǾ�� �Ѵ�(��������)
// 	int idx;
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//
//	return 0;
//
//}

// �ð� ���⵵
// ���α׷�(�Լ�)�� ����ð��� �󸶳� �ɸ������� ��Ÿ���� ǥ�����.
// �Լ��� ����ð��� ǥ��
// ������ ���ٹ��� ���� ����ð��� �ܼ��ϰ� ǥ��.
// ����ð� : �Լ� / �˰��� ���࿡ �ʿ��� ����(step) �� 

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
//T(N) = N (N - ���Ѵ�� ����)
// input �� ���� ����ؼ� �ð��Ҹ� �Ͼ��.
// ��(N) - ������ ���ٹ� ǥ��
// ������ ���ٹ� : ������ �Լ��� N�� ���Ѵ��� ��츦 �����ؼ� � ���¿� �����ϴ����� �м�.

// �ּ��� ���
// �־��� ���
// ����� ���
// Ž���˰��� ����

//case					when							times
//	best case		 0								  1
//	worst case		 ������ or ������			  n
//
//ǥ�����
//best	case - lower bound ���(���Ѽ�) - �ƹ��� ���� ����ð� �̻��̴�. - ��(1) (����ް�)
//worst case - upper bound ���(���Ѽ�) - �ƹ��� ������ n�� ����ϴ� ���� �����̴� - ��(N)
//
//case    best     worst		avg
//��        ��(1)		��(N)		 
//��			��(1)		��(N)		��(N)			T(N) = N/2 -> N
//��			��(1)		��(1)


// ����Ž��

//1ȸ�� : 8ĭ 
//2ȸ�� : 4ĭ 1/2
//3ȸ�� : 2ĭ 1/4
//4ȸ�� : 1ĭ 1/8
//[Worst Case]
//-1��° ���� �ݺ� �˻� ����� 1/2(8->4)�� �پ���.
//-2��° ���� �ݺ� �˻� ����� 1/2(4->2)�� �پ���.
//-3��° ���� �ݺ� �˻� ����� 1/2(2->1)�� �پ���.
//-������� �˻� ����� 1�� �Ǵ���
//
//input size N�̶�� ����
//= N*(1/2)^k = 1
//= N/2^k = 1
//= N + 2^k 
//= log2N = log22^k
//= log2N = k
//= ��(logN)


// ��(1) < ��(logN) < ��(N) < ��(N*logN) < ��(N^2) < ��(2^N) < ��(N!)

// ���� ��(N)
// ���� ��(logN)














