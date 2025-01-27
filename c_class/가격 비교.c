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
	printf("딸기의 가격을 입력하서요 : ");
	scanf_s("%d", &a);
	printf("귤의 가격을 입력하서요 : ");
	scanf_s("%d", &b);
	int expensive = max(a, b);
	printf("더 비싼 과일은", expensive);

			
	/*
	두 가격중 더 큰 값을 반환하는 함수 
	
	*/
	/*
	숫자 2가지를 가지고 곱샘하는 함수 생성
	숫자 2가지 입력
	연산결과 0 X 0 =00
	*/
	

	return 0;
}