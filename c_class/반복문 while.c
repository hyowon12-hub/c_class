#include <stdio.h>
int main(void)
{
	/*
	�ڷ��� ������ = �ʱⰪ;
	while(����){
	�ݺ���Ű�����ϴ� �ڵ� �ۼ�
	������;
	}
	*/
	int c_class = 1;
	while (c_class <= 10) {
		printf("c��� ���� %d \n", c_class);
		c_class++;
	}

	//whell, ifȰ�� 6�� �����
	int a = 6;
	while (a < 60) {
		if (a % 6 == 0) {
			printf("%d \n", a);
		}
		a++;
	}
		return 0;
}