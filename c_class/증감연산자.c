#include <stdio.h>
int main(void)
{
	/*
	증감연산자의 종류
	감소 : (변수--,/--변수;)
	증가 : (변수++,++변수;)
	++변수와 변수++의 차이점
	int a = ++b; : b의 값을 1 증가시킨 후 a에 대입
	*/
	int putA = 10, putB = 20;
	printf("A : %d\n", putA);
	printf("A : %d\n", ++putA);//++이 붙어서 1이 증가한다
	printf("A : %d\n", putA);
	printf("\n");
	printf("A : %d\n", putB);
	printf("A : %d\n", ++putB);//++이 붙어서 1이 증가한다
	printf("A : %d\n", putB);
	return 0;
}
/*
오늘 배운 내용 정리
1. %8.2f : 8칸을 확보한 후 소수점 2자리까지 출력(반올림)
2. scanf_s("입력 : "); : 입력을 받은 다음 출력
3. 산술연산자  : 자료형이 다를 때 결과값, 서식지정자가 다를다
4. 대입연산자 : a += b : a = a + b
5. 비교연산자 : a > b : a가 b보다 크다, == : 같다, != : 다르다
6. 증감연산자 : ++변수와 변수++의 차이점
*/