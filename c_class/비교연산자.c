#include <stdio.h>
int main(void)
{
	/*
	비교연산자의 종류
	a<b : (a가 b보다 작다)
	a>b : (a가 b보다 크다)
	a<=b : (a가 b보다 작거나 같다)
	a>=b : (a가 b보다 크거나 같다)
	a==b : (a와 b가 같다)
	a!=b : (a와 b가 다르다)
	조건을 만족하는 경우1, 만족하지 않는 경우 0을 반환한다.

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