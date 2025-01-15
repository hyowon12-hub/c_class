#include <stdio.h>
int main(void)
{
	/*
	논리연산자의 종류
	1. && : and 연산자 : 피연산자중 하나만 false이면 falsef를 반환
	2. || : or 연산자 : 피연산자중 하나라도 true면 true를 반환
	3. ! : not 연산자 : 논리부정연산자로 피연산자와 반대의 값을 반환
	피연산자는? 연산대상데이터
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;
	result = one > two && three < four; 
	//10>20? = false
	// 20>30? = false
	// 30>40? = false
	printf("result : %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("result : %d\n", result);

	result = !(one > two);
	printf("result : %d\n", result);
	return 0;
}