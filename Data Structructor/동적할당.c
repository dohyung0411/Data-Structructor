//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include	<malloc.h>


// 01 �����Ҵ� �⺻


//void main()
//{
	// �����Ҵ� �⺻

	/*
	int* pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("�����Ҵ� ����!");
		exit(1);
	}

	*pi = 10;
	printf("pi = %d\n", *pi);

	free(pi);
	*/

	// �����Ҵ� ����(�Է��� ��ŭ�� �����Ҵ� ���� ���� + �� ����)

	//char buff[4096]; // �ӽ� ����Ǵ� ����
	//printf("�Է� : ");
	//fgets(buff, sizeof(buff), stdin); // ����Ű�� �����ؼ� �ޱ� ������ ����(\n)�� �����ϴ� �۾�
	//int len = strlen(buff) - 1; // \n�� index ����
	//buff[len] = '\0'; // \n -> \0���� ��ȯ
	//
	//char* word = (char*)malloc(len + 1); // NULL���� �߰�
	//if (word == NULL)
	//{
	//	return -1;
	//}
	//strcpy_s(word, _msize(word), buff); // �����Ҵ�� ������ ����� �궧�� _msize()�� ����Ѵ�.

	//printf("word : %s, �����Ҵ������ : %d byte\n", word, _msize(word));


//}