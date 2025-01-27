#include <stdio.h>
int number = 50;

void staticFunction()
{
	static int num = 0;
	num++;
	printf("num : %d \n", num);
}
int localFunction(int a)
{
	int result = 5;
	return number + a;
}
int main(void)
{
	int a = 100;
	printf("%d \n", a);
	int result = localFunction(a);
	int number = 40;
	printf("%d\n ", result);
	printf("%d\n", number);
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	//전역변수 : 스코프 밖에서 사용함
	//특징 : 지역변수와 전역변수의 이름이 중복할때 지역변수를 우선적으로 사용함

	/*
	지역변수
	1. 중괄호 내에서 선언된 모든 변수는 해당함수에서만 사용 가능
	2. 함수를 실행할 때 사용되는재료인 매개변수도 지역변수 이다
	3. 지역변수는 자신이 선언된 지역 외 다른곳은 사용불가
	4. 변수의 이름 중복x다른함수에서는ㅇ

	전역변수 
	1. 스코프 밖에서 선언된 변수
	2. 모든 함수에서 사용 가능
	3. 지역변수가 우선적
	4. 프로그램이 시작됨과 동시에 메모리 공간 할당 프로그램 종료시까지 존재
	
	스테틱변수
	1. static이라는 키워드로 선언
	2. 지역, 전역 모두 선언 가능
	3. 지역변수와 함께 함수 호출 메모리 사라지지 않음
	4. 프로그램 종료시까지 공간 유지
	*/
	return 0;
}