#include <stdio.h>
int max(int a, int b)
{
	if (a, b) {
		return a;
	}
	else {
		return b;
	}
}
int main(void)
{
	int a, b;
	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &b);
	int expensive = max(a, b);
	printf("�� ��� ������", expensive);

			
	/*
	�� ������ �� ū ���� ��ȯ�ϴ� �Լ� 
	
	*/
	/*
	���� 2������ ������ �����ϴ� �Լ� ����
	���� 2���� �Է�
	������ 0 X 0 =00
	*/
	

	return 0;
}