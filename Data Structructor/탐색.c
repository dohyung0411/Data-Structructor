//#include<stdio.h>
//
//
//
////탐색
//
////순차탐색
//
//int LSearch(int* ar, int len, int target)	//ar : main함수arr을가리키는 포인터
//{											//len : 배열의 길이
//											//target : 찾을 데이터 
//	//배열의 0번째에서 마지막 요소까지 차례로 이동하면서
//	//target과 일치하는 데이터가 있는지 확인후 존재한다면
//	//해당 요소의 idx값을 return 합니다
//	//target과 일치하는 데이터가 없을땐 -1을 return 합니다
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
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("해당 숫자는 존재하지 않습니다\n");
//	else
//		printf("타겟 저장 IDX : %d\n", idx);
//	return 0;
//}



//이진탐색