#include <stdio.h>
int main(void)
{
	//10 10.0(�Ǽ�)
	unsigned int max_number = 2200000000;
	printf("%u", max_number);
	//������ 35�� ��Ʈ : 2�� �ŵ�����̴�
	// 1����Ʈ = 8��Ʈ
	// 3��Ʈ = 8 , 4��Ʈ = 16, 5��Ʈ = 32, 6��Ʈ = 64, 7��Ʈ = 128, 8��Ʈ = 256
	// 1����Ʈ�� �ִ밪 = 128
	//unsigned int�� ����ϸ� -�� +�� �ν��Ͽ� 42�� ������ �Ѵ�.
	//unsigned int�� %d �� �ƴ϶�	%u�� ����Ѵ�.
	int num1 = 1;
		printf("%d",sizeof( num1));
	return 0;
}
