#include <stdio.h>
int main(void)
{
	/*
	for(�ʱⰪ, ������;���ǽ�){
	���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/
	int i;
	for (i = 1; i <= 10; i++) {
		printf("for�� �ݺ�%d ��° \n", i);
	}

	int n;
	for (n = 10; n >= 1; n--) {
		printf("for�� �ݺ�%d ��° \n", n);
	}

	int a;
	for (a = 1; a <= 10; a++){
		printf("%d�� ������ : %d \n", a,a*a);
	}
	return 0;
}