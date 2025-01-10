#include <stdio.h>
int main(void)
{
	char ch1 = 'A';
	printf("%c\n", ch1);//아스키코드 : 숫자와 문자를 연결해놓은 것
	//문자를 숫자로 변환
	// //참고 : 342쪽
	

	char ch2 = 65;
	printf("%c\n", ch2);

	printf("문자: %c, 숫자:%d\n", ch1, ch1);
	printf("문자: %c, 숫자:%d\n", ch2, ch2);

	int num3 = 'c';

	printf("문자: %c, 숫자:%d\n", num3, num3);

	
	return 0;
}