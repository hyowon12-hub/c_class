#include <stdio.h>
int main(void)
{
	/*
	���������� ����
	1. && : and ������ : �ǿ������� �ϳ��� false�̸� falsef�� ��ȯ
	2. || : or ������ : �ǿ������� �ϳ��� true�� true�� ��ȯ
	3. ! : not ������ : �����������ڷ� �ǿ����ڿ� �ݴ��� ���� ��ȯ
	�ǿ����ڴ�? ����������
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;
	result = one > two && three < four; 
	//10>20? = false
	// 20>30? = false
	// 30>40? = false
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("result : %d\n", result);

	result = !(one > two);
	printf("result : %d\n", result);
	return 0;
}