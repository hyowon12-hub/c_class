#include <stdio.h>
int math(int a, int b)
{
	return a * b;
}

int main(void)
{
	/*
	���� 2������ ������ �����ϴ� �Լ� ����
	���� 2���� �Է�
	������ 0 X 0 =00
	*/
	int i, j;
	printf("���� �Է� : ");
	scanf_s("%d %d", i, j);
	printf("������ %d * %d = %d�Դϴ�");

	return 0;
}