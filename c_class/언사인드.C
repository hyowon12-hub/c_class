#include <stdio.h>
int main(void)
{
	unsigned char ch;//0~255(-128~127)값의 범위
	unsigned short sh;//0~65,535(-32,768~32,767)값의 범위
	unsigned int in;//0~4,294,967,295(-2,147,483,648(-21억)~2,147,483,647(21억)) 값의 범위
	int num;

	ch = 128;
	sh = 50000;
	in = 4100000000;
	num = 255;

	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);	
	printf("%d\n", num);
	//2진수를 10진수로 바꾸려면 2의 거듭제곱을 이용한다.

	return 0;
}