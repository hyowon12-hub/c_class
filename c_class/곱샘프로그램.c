#include <stdio.h>
int multiply(int a, int b)
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
	int num1, num2;
	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &num2);

	int result = multiply(num1, num2);
	printf("������ : %d X %d = %d", num1, num2, result);
	
	/*
	�� ������ �� 
	*/

	return 0;
}