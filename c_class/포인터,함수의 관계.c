#include <stdio.h>
void swap(int* i, int* j)
{
	int temp;//임시공간
	temp = *i;//x로 받아온 인자값을 temp에 담음
	*i =*j;
	*j = temp;

}
int main(void)
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;

	/*
	call-by-value = 값을 전하기 위해 복사하는 원리
	call-by-reference(address) = 주소를 전달하는 원리

	*/
}