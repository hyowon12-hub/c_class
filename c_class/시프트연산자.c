#include <stdio.h>
int main(void)
{
	/*
	시프트연산자
	1. << : 왼쪽으로 비트를 이동시킴(왼쪽 시프트연산자) : 10 * 2의 n승 
	2. >> : 오른쪽으로 비트를 이동시킴(오른쪽 시프트연산자) : 10 / 2의 n승
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