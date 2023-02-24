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

*/

//#include<stdio.h>
//
//typedef struct arrayList
//{
//	int size;
//	int arr[10];
//	int count;
//
//}List;
//
//int getsize(List l)
//{
//	return l.count;
//}
//
//void insert(List* l, int data)
//{
//	if (l->size == l->count)
//	{
//		printf("더 이상 값을 저장할 수 없습니다.");
//	}
//
//	else
//	{
//		l->arr[l->count] = data;
//		l->count++;
//	}
//}
//int main(void)
//{
//	List l;
//	l.size = 10;
//	l.count = 0;
//
//	insert(&l, 5);
//	printf("%d", l.arr[0]);
//
//}