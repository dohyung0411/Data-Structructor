//�迭����Ʈ


/*

- ����Ʈ ��� ������ � ������ ���� �ϴ���...
- �迭 ������� ���� = �迭����Ʈ
- ���� ������� ���� = ���Ḯ��Ʈ

- ����Ʈ
- 1. 0�� �̻��� �����͵��� ��� �� ����
- 2. ������ �����ʹ� ������ ������.

1 - 2 - 3 - 4

- �迭 ����Ʈ : '�迭' �̶�� ������ �̿��� ������ '����Ʈ' (����)
- ����
	 �������� �����͸� �迭�� �̿��� �����ϰ� �ִ� ����Ʈ
		-> �� �����ʹ� ���� Ÿ������ �̷���� �ִ�.
- ��� (List = �迭����Ʈ�� ������ ����ü Ÿ��, Item -> ����Ʈ�� ���� �� ������ Ÿ��)
			Boolean -> �� ���� ������ ������ Ÿ��
	������ ����
		-> i��° �ε����� ������ ����
			�ʿ��ϴٸ� ���� ���� (insertByIndex)
		-> ����Ʈ�� �������� �����͸� ���� (v)
			insert()
				@param
					List
						- �����͸� ������ ����Ʈ
					Item i
						 - ����Ʈ�� ������ ������
				@return
					x -> void
	������ ��ȸ
		-> data��� ���� ����Ʈ ���� �����ϴ��� Ȯ��
			-> 1. �����ϴ��� ���θ� Ȯ��
			-> 2. �ش� �����Ͱ� ��ġ�� �ε����� ��ȯ.

				find()
					@param
						List l
							������ ���� ���θ� Ȯ���� ����Ʈ
						Item target
							����Ʈ ���� �����ϴ��� Ȯ���� �� ��
					@return
						if( ����Ʈ �ȿ� target�� ������ ���)
							return 'target�� �ε���'
						else
							return -1
	������ ��������
		-> �ش� �����ʹ� ����Ʈ���� ���� ��
			-> data�� ������ ����Ʈ���� ������ �´�.
			-> index�� �������� ����Ʈ���� ������ �´�. (v)
		remove()
			@param
				List l
					� ����Ʈ���� ���� �����ð��� (���� �Ұ���)
				int index
					����Ʈ ������ �����ϰ� ���� ���� ��ġ (�ε���)
			@return
				Item target
					����Ʈ���� ���� ��, index��°�� ��
	����Ʈ�� ũ�⸦ ���ϱ�
		-> ����Ʈ �߿��� ����Ǿ� �ִ� ������ ����
		getSize()
			@param
				List l
					ũ�⸦ ���� ����Ʈ
			@return
				int size
					����Ʈ ���� ����� ������ ����
	����Ʈ�� �� ������ �ִ��� Ȯ���ϱ� (�����ִ���)
		isFull()
			@param
				List l
					�� ���ִ��� Ȯ���� ����Ʈ
			@return (Boolean)
				if(�� ������ ���)
					return true
				else
					return false
	����Ʈ�� �� ������� Ȯ���ϱ�
		isFull()
				@param
					List l
						�� ������� Ȯ���� ����Ʈ
				@return (Boolean)
					if(�� ������� ���)
						return true
					else
						return false

	=> �迭 ��� ����Ʈ�� ����!!!
		1. ���� ������ �� �ִ� ������ ũ�Ⱑ �������̴�.
		=> �����Ҵ����� �ذ�
		2. ���� ����, ���� ���꿡�� ����� ���� ���.
		=> �ܼ��� ���� �ϳ� ����, �����ϱ� ���ؼ� �־��� ��쿡�� �迭 ��ü�� ���Ұ� ������ �̵��ؾ��Ѵ�.
	=> �迭 ��� ����Ʈ�� ����!!
		1. Ư�� �ε����� (Ư�� ������) ���� �ѹ��� ã�� �� �ִ�.)
			(l.arr[5])
	=> �� �迭����Ʈ�� ����, ���� ���꿡�� ����� ���� �� �� �ۿ� ����?
		=> �迭�� ������� ����Ʈ�� �����ؼ� ������ ���ӵ� ��ġ�� ����Ǿ�� �߱� ����!
		=> �׷� ������ ���ӵ� ��ġ�� �������� ������ �ȵǳ�?


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
//		printf("�� �̻� ���� ������ �� �����ϴ�.");
//	}*/
//
//	if (isFull(*l) == 1)
//	{
//		// �߰��� �����͸� �Ҵ� ���� �� �ִ� ���� ������ �ֱ�
//		printf("���� �߰� �Ҵ�!!\n");
//		l->size *= 2;
//		// malloc() : ������ ���� �Ҵ�
//		/*
//			1. malloc���� ���ο� �� ū ������ �Ҵ� �ް� 
//			2. ���� �ִ� ������ ����Ǿ� �ִ� �����͸� �Ű��ְ�
//			3.���� ���� �Ҹ�����ְ�
//			4.���� �Ҵ���� ������ �ּҸ� �ٽ� l.arr�� �����ϵ��� �ٲ۴�.
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
//	// target�� ��ġ�� �ε����� ���ؾ���. -> ����Ž�� �ص� ����
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
//	// �̰����� �ڵ尡 ���� �Ǿ��ٴ� ���� => target �����Ͱ� l ����Ʈ�� �������� �ʴ´�.
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
//	l.arr = (int*)malloc(sizeof(int) * size); // ������ ũ���� �迭�� ������ش�.
//
//	return  l;
//}