//#include<stdio.h>
//
//
//
////Ž��
//
////����Ž��
//
//int LSearch(int* ar, int len, int target)	//ar : main�Լ�arr������Ű�� ������
//{											//len : �迭�� ����
//											//target : ã�� ������ 
//	//�迭�� 0��°���� ������ ��ұ��� ���ʷ� �̵��ϸ鼭
//	//target�� ��ġ�ϴ� �����Ͱ� �ִ��� Ȯ���� �����Ѵٸ�
//	//�ش� ����� idx���� return �մϴ�
//	//target�� ��ġ�ϴ� �����Ͱ� ������ -1�� return �մϴ�
//
//	for (int i = 0; i <= len; i++)
//	{
//		if (*ar == target)
//		{
//			return *ar;
//		}
//
//		else
//		{
//			ar = (ar + 1);
//		}
//
//		if (i == len)
//		{
//			return -1;
//		}
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
//	return 0;
//}



//����Ž��