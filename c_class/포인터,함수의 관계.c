#include <stdio.h>
void swap(int* i, int* j)
{
	int temp;//�ӽð���
	temp = *i;//x�� �޾ƿ� ���ڰ��� temp�� ����
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
	call-by-value = ���� ���ϱ� ���� �����ϴ� ����
	call-by-reference(address) = �ּҸ� �����ϴ� ����

	*/
}