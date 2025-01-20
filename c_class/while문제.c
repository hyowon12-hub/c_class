#include <stdio.h>
int main(void)
{
	//whell문을 사용해서 0을 입력 할 때 까지 프로그램을 끝내지 않음
	//사용자가 어떤 숫자를 입력 
	int  a;
	printf("숫자를 입력해주세요 : \n");
	scanf_s("%d", &a);
	while (a ! = 0) {
			printf("입력한 숫자는 %d입니다 다시입력해주세요(0 입력시 종료)");
			scanf_s("%d", &a);
		}

		a;
	

	return 0;
}