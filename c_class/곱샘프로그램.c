#include <stdio.h>
int multiply(int a, int b)
{
	return a * b;
}

int main(void)
{
	/*
	숫자 2가지를 가지고 곱샘하는 함수 생성
	숫자 2가지 입력
	연산결과 0 X 0 =00
	*/
	int num1, num2;
	printf("첫번째 숫자 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째 숫자 입력 : ");
	scanf_s("%d", &num2);

	int result = multiply(num1, num2);
	printf("연산결과 : %d X %d = %d", num1, num2, result);
	
	/*
	두 가격중 더 
	*/

	return 0;
}