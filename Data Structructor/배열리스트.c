//배열리스트


/*

- 리스트 라는 구조를 어떤 식으로 구현 하느냐...
- 배열 기반으로 구현 = 배열리스트
- 연결 기반으로 구현 = 연결리스트

- 리스트
- 1. 0개 이상의 데이터들을 모아 둔 집합
- 2. 각각의 데이터는 순서를 가진다.

1 - 2 - 3 - 4

- 배열 리스트 : '배열' 이라는 도구를 이용해 구현한 '리스트' (설계)
- 형태
	 여러개의 데이터를 배열을 이용해 저장하고 있는 리스트
		-> 각 데이터는 같은 타입으로 이루어져 있다.
- 기능 (List = 배열리스트를 구현한 구현체 타입, Item -> 리스트에 저장 될 데이터 타입)
			Boolean -> 논리 값을 가지는 데이터 타입
	데이터 저장
		-> i번째 인덱스에 데이터 저장
			필요하다면 따로 구현 (insertByIndex)
		-> 리스트의 마지막에 데이터를 저장 (v)
			insert()
				@param
					List
						- 데이터를 저장할 리스트
					Item i
						 - 리스트에 저장할 데이터
				@return
					x -> void
	데이터 조회
		-> data라는 값이 리스트 내에 존재하는지 확인
			-> 1. 존재하는지 여부만 확인
			-> 2. 해당 데이터가 위치한 인덱스를 반환.

				find()
					@param
						List l
							데이터 존재 여부를 확인할 리스트
						Item target
							리스트 내에 존재하는지 확인해 볼 값
					@return
						if( 리스트 안에 target이 존재할 경우)
							return 'target의 인덱스'
						else
							return -1
	데이터 가져오기
		-> 해당 데이터는 리스트에서 삭제 됨
			-> data의 값으로 리스트에서 가지고 온다.
			-> index를 기준으로 리스트에서 가지고 온다. (v)
		remove()
			@param
				List l
					어떤 리스트에서 값을 가져올건지 (삭제 할건지)
				int index
					리스트 내에서 삭제하고 싶은 값의 위치 (인덱스)
			@return
				Item target
					리스트에서 삭제 된, index번째의 값
	리스트의 크기를 구하기
		-> 리스트 중에서 저장되어 있는 값들의 개수
		getSize()
			@param
				List l
					크기를 구할 리스트
			@return
				int size
					리스트 내에 저장된 값들의 개수
	리스트가 빈 공간이 있는지 확인하기 (꽉차있는지)
		isFull()
			@param
				List l
					꽉 차있는지 확인할 리스트
			@return (Boolean)
				if(꽉 차있을 경우)
					return true
				else
					return false
	리스트가 텅 비었는지 확인하기
		isFull()
				@param
					List l
						텅 비었는지 확인할 리스트
				@return (Boolean)
					if(텅 비어있을 경우)
						return true
					else
						return false

	=> 배열 기반 리스트의 단점!!!
		1. 값을 저장할 수 있는 공간의 크기가 고정적이다.
		=> 동적할당으로 해결
		2. 값의 삽입, 삭제 연산에서 비용이 많이 든다.
		=> 단순히 값을 하나 삽입, 삭제하기 위해서 최악의 경우에는 배열 전체의 원소가 공간을 이동해야한다.
	=> 배열 기반 리스트의 장점!!
		1. 특정 인덱스의 (특정 순서의) 값을 한번에 찾을 수 있다.)
			(l.arr[5])
	=> 왜 배열리스트는 삽입, 삭제 연산에서 비용이 많이 들 수 밖에 없나?
		=> 배열을 기반으로 리스트를 구현해서 값들이 연속된 위치에 저장되어야 했기 때문!
		=> 그럼 값들을 연속된 위치에 저장하지 않으면 안되나?


*/


//#include<stdio.h>
//#include<stdlib.h>
//typedef struct arrayList
//{
//	int size;
//	/*int arr[10];*/
//	int* arr;
//	int count;
//
//}List;
//
//int getsize(List l);
//
//void insert(List* l, int data);
//
//void printList(List l);
//
//int find(List l, int target);
//
//int removeList(List* l, int idx);
//
//int isFull(List l);
//
//int isEmpty(List l);
//
//List makeArrayList(int size);
//
//int main(void)
//{
//	/*List l;
//	l.size = 10;
//	l.count = 0;*/
//
//	List l = makeArrayList(5);
//
//
//	printf("is Empty : %d, is Full : %d\n", isEmpty(l), isFull(l));
//
//	for(int i = 0; i < 10; i++)
//		insert(&l, i + 1);
//	printList(l);
//	
//	printf("is Empty : %d, is Full : %d\n", isEmpty(l), isFull(l));
//
//	printf("%d\n", find(l, 3));
//	printf("%d\n", find(l, 7));
//
//	printf("%d\n", removeList(&l, 3));
//	printList(l);
//
//
//}
//
//
//
//int getsize(List l)
//{
//	return l.count;
//}
//
//void insert(List* l, int data)
//{
//	/*if (l->size == l->count)
//	{
//		printf("더 이상 값을 저장할 수 없습니다.");
//	}*/
//
//	if (isFull(*l) == 1)
//	{
//		// 추가로 데이터를 할당 받을 수 있는 공간 마련해 주기
//		printf("공간 추가 할당!!\n");
//		l->size *= 2;
//		// malloc() : 공간을 새로 할당
//		/*
//			1. malloc으로 새로운 더 큰 공간을 할당 받고 
//			2. 원래 있던 공간에 저장되어 있던 데이터를 옮겨주고
//			3.원래 공간 소멸시켜주고
//			4.새로 할당받은 공간의 주소를 다시 l.arr가 저장하도록 바꾼다.
//		*/
//		l->arr = (int*)realloc(l->arr, sizeof(int) * l->size);
//	}
//
//	l->arr[l->count] = data;
//	l->count++;
//
//}
//
//void printList(List l)
//{
//	for (int i = 0; i < l.count; i++)
//	{
//		printf("%d", l.arr[i]);
//	}
//
//	printf("\n");
//}
//
//int find(List l, int target)
//{
//	// target이 위치한 인덱스를 구해야함. -> 이진탐색 해도 좋음
//
//
//	for (int i = 0; i < l.count; i++)
//	{
//		if (target == l.arr[i])
//		{
//			return i;
//		}
//	}
//
//	// 이곳까지 코드가 진행 되었다는 뜻은 => target 데이터가 l 리스트에 존재하지 않는다.
//	return -1;
//
//}
//
//int removeList(List* l, int idx)
//{
//
//	int delNum = l->arr[idx];
//	for (int i = idx; i < l->count - 1; i++)
//	{
//		l->arr[i] = l->arr[i + 1];
//	}
//	l->count--;
//	return delNum;
//
//}
//
//int isFull(List l)
//{
//	if (l.size == l.count)
//		return 1;
//	else
//		return 0;
//}
//
//int isEmpty(List l)
//{
//	if (l.count == 0)
//		return 1;
//	else
//		return 0;
//}
//
//List makeArrayList(int size)
//{
//	List l;
//	l.size = size;
//	l.count = 0;
//	l.arr = (int*)malloc(sizeof(int) * size); // 동적인 크기의 배열을 만들어준다.
//
//	return  l;
//}