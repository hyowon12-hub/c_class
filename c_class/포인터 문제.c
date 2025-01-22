#include <stdio.h>
int main(void)
{
	//뱐수와 포인터변수
	//변수를 만들고 변수에 들어있는 값 " :변수의 주소값 (4 : 1004)

	int a = 4;
	int* p;
	int* p = &a;
	printf("%d : %p",*p, a);
	
	return 0;
}