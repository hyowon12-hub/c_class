#include <stdio.h>
int main(void)
{
	/*
	����Ʈ������
	1. << : �������� ��Ʈ�� �̵���Ŵ(���� ����Ʈ������) : 10 * 2�� n�� 
	2. >> : ���������� ��Ʈ�� �̵���Ŵ(������ ����Ʈ������) : 10 / 2�� n��
	10<<1 - 00001010 -> 00010100 = 20
	10>>1 - 00001010 -> 00000101 = 5 
	*/
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1; 
	int shift_right = num2 >> 2;
	printf("%d << 1 %d \n", num1, shift_left);
	printf("%d >> 1 %d \n", num2, shift_right);
	return 0;
}