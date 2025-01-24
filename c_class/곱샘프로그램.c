#include <stdio.h>
int math(int a, int b)
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
	int i, j;
	printf("숫자 입력 : ");
	scanf_s("%d %d", i, j);
	printf("연산결과 %d * %d = %d입니다");

	return 0;
}