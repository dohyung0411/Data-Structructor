//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include	<malloc.h>


// 01 동적할당 기본


//void main()
//{
	// 동적할당 기본

	/*
	int* pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("동적할당 실패!");
		exit(1);
	}

	*pi = 10;
	printf("pi = %d\n", *pi);

	free(pi);
	*/

	// 동적할당 응용(입력한 만큼의 동적할당 공간 형성 + 값 대입)

	//char buff[4096]; // 임시 저장되는 공간
	//printf("입력 : ");
	//fgets(buff, sizeof(buff), stdin); // 엔터키를 포함해서 받기 때문에 엔터(\n)을 제거하는 작업
	//int len = strlen(buff) - 1; // \n의 index 숫자
	//buff[len] = '\0'; // \n -> \0으로 변환
	//
	//char* word = (char*)malloc(len + 1); // NULL공간 추가
	//if (word == NULL)
	//{
	//	return -1;
	//}
	//strcpy_s(word, _msize(word), buff); // 동적할당된 공간의 사이즈를 잴때는 _msize()를 사용한다.

	//printf("word : %s, 동적할당사이즈 : %d byte\n", word, _msize(word));


//}