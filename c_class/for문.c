#include <stdio.h>
int main(void)
{
	/*
	for(초기값, 증감식;조건식){
	조건식이 참이라면 실행시킬 코드;
	}
	*/
	int i;
	for (i = 1; i <= 10; i++) {
		printf("for문 반복%d 번째 \n", i);
	}

	int n;
	for (n = 10; n >= 1; n--) {
		printf("for문 반복%d 번째 \n", n);
	}

	int a;
	for (a = 1; a <= 10; a++){
		printf("%d의 제곱은 : %d \n", a,a*a);
	}
	return 0;
}