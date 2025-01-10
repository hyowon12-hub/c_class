#include <stdio.h>
int main(void)
{
	//10 10.0(실수)
	unsigned int max_number = 2200000000;
	printf("%u", max_number);
	//교과서 35쪽 비트 : 2의 거듭재곱이다
	// 1바이트 = 8비트
	// 3비트 = 8 , 4비트 = 16, 5비트 = 32, 6비트 = 64, 7비트 = 128, 8비트 = 256
	// 1바이트의 최대값 = 128
	//unsigned int를 사용하면 -를 +로 인식하여 42만 정도로 한다.
	//unsigned int는 %d 가 아니라	%u를 사용한다.
	int num1 = 1;
		printf("%d",sizeof( num1));
	return 0;
}
