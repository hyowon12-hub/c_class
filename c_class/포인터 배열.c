#include <stdio.h>
int main(void)
{
	/*
	 
	*/
	//int* p1,* p2,* p3,*p4
	//int* p[5];
	//int a = 3;
	///p[1] = &a;
	//printf("%d\n", *p[1]);

	//3길이포인터 배열을 선언하고, 새게의 정수형 변수를선언
	//포인터 배열에 각 변수의 주소를 저장한 수
	//for문은 이용해서 포인터 배열을 통해 각 변수에 들어있는 값을 출력해보기
	//포인터 배열 [*]가 가리키는 값 :*

	int* ptr[3];
	int a = 10, b = 20, c = 30;
	ptr[0]= &a;
	ptr[1] = &b;
	ptr[2] = &c;
	printf("%p \n",&a);
	printf("%p \n", &b);
	printf("%p \n", &c);
	int i;
	for (i = 0; i < 3;i++) {
		printf("ptr[%d]가 가리키는 값%d\n", i, *ptr[i]);
	}
	//2차원 배열 : [*]가 2개 있는 배열이다, 이중for문과 같이 쓰인다.
	//int a[3] [4]int [3]행 [4]열  = 2차원배열 (12칸) 표기(변수 이름) : a[0][0], a[0][1], a[1][0], a[2][3]등등



	return 0;
}