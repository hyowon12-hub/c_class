#include <stdio.h>
int main(void)
{
	/*
	�񱳿������� ����
	a<b : (a�� b���� �۴�)
	a>b : (a�� b���� ũ��)
	a<=b : (a�� b���� �۰ų� ����)
	a>=b : (a�� b���� ũ�ų� ����)
	a==b : (a�� b�� ����)
	a!=b : (a�� b�� �ٸ���)
	������ �����ϴ� ���1, �������� �ʴ� ��� 0�� ��ȯ�Ѵ�.

	*/
	int a = 1, b = 10;
	printf("a > b : %d \n", a > b);//0
	printf("a < b : %d \n", a < b);//1
	printf("a >= b : %d \n", a >= b);//0
	printf("a <= b : %d \n", a <= b);//1
	printf("a == b : %d \n", a == b);//0
	printf("a != b : %d \n", a != b);//1
	return 0;
}