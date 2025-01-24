#include <stdio.h>
int main(void)
{
	int a[3] = { 1,2,3 };
	int* ptr = a; //a[0]번제의 주소를 저장함

	//배열포인터
	int arr[3] = { 1,2,3 };
	int(*arrptr)[3] = &arr;
	printf("첫번째 요소는 : %d \n", (*arrptr)[0]);
	printf("두번째 요소는 : %d \n", (*arrptr)[1]);
	printf("세번째 요소는 : %d \n", (*arrptr)[2]);
	for (int i = 0;i < 3;i++) {
	printf("arr[%d] : %d \n", i, (*arrptr)[i]);
	}

	//2차원 배열
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	int (*arr2Ptr)[3] = arr2;

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			printf("arr2[%d][%d] : %d\n", i, j, arr2[i][j]);//추가적으로 역참조가 필요 없음
		}
		printf("\n")
	}
		

	/*
	오늘 배운것
	1. 포인터 배열 : 포인터를 배열로 선언하는 방법
	2. 2차원 배열
	3. 배열포인터(1차원)
	*/
	return 0;
}