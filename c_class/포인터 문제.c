#include <stdio.h>
int main(void)
{
	//������ �����ͺ���
	//������ ����� ������ ����ִ� �� " :������ �ּҰ� (4 : 1004)

	int a = 4;
	int* p;
	int* p = &a;
	printf("%d : %p",*p, a);
	
	return 0;
}