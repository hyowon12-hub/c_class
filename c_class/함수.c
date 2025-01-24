#include <stdio.h>
void sayhello()
{
	printf("Hello World \n");
}
int add(int a, int b)
{
	return a + b;
}
void name(char* name)
{
	printf("Hello, %s \n", name);
}
int main(void)
{
	
	
	//void 문제
	sayhello();
	int result = add(5,3);
	printf("result : %d\n", result);
	//매개변수 문제
	name("효원");

	/*
	함수
	반환형 함수 이름(매개변수)
	{
		return 리턴할 값;
	}
	반환형 : 함수의 결과를 나타낼때 사용할 자료형
	함수이름 : 호출할 때 사용할 이름(개발자 마음대로)
	매개변수 : 함수가 작업을 수행하기 위해 필요한 입력값(없을 수도 있음)
	return : 함수가 작업을 끝낸 뒤 호출한 곳으로 돌려주는 명령어(viod일땐 생략가능)

	함수를 쓰는 이유 : 코드나 기능을 한번만 사용하지 않고 여러번 반복할 수 있어서, 
								유지보수가 쉬워서, 중복되는 코드를 줄일 수 있다
	*/
	return 0;
}