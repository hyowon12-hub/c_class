#include <stdio.h>
int main(void)
{
	int a[3] = { 1,2,3 };
	int* ptr = a; //a[0]������ �ּҸ� ������

	//�迭������
	int arr[3] = { 1,2,3 };
	int(*arrptr)[3] = &arr;
	printf("ù��° ��Ҵ� : %d \n", (*arrptr)[0]);
	printf("�ι�° ��Ҵ� : %d \n", (*arrptr)[1]);
	printf("����° ��Ҵ� : %d \n", (*arrptr)[2]);
	for (int i = 0;i < 3;i++) {
		printf("arr[%d] : %d \n", i, (*arrptr[i]));
	}

	/*
	���� ����
	1. ������ �迭 : �����͸� �迭�� �����ϴ� ���
	2. 2���� �迭
	3. �迭������(1����)
	*/
	return 0;
}