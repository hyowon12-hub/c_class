#include <stdio.h>
int main(void)
{
	//+-*/
	//변수 문자형1/ 정수형2
	//나눗셈 특수처리
	int a, b;
	char num;
	printf("연산자를 입력해주세요(+,-,*,/) : ");
	scanf_s("%c", &num,1);
	printf("두 숫자를 입력하세요 : ");
	scanf_s("%d %d", &a, &b");
	switch (num) {
	case 1: printf("%d + %d = %d\n", a ,b ,a + b);
		break;
	case 2: printf("%d -%d = %d\n", a, b, a - b);
		break;
	case 3: printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 4: printf("%d / %d = %d\n", a, b, a / b);
	}
	else {
		printf("0으로 나눌 수 없습니다.\n");
	}
		break;

	default: printf("유효하지 않은 연산임");
		break;

	

	return 0;
}