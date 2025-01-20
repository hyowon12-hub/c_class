#include <stdio.h>
int main(void)
{
	/*
	자료형 변수명 = 초기값;
	while(조건){
	반복시키고자하는 코드 작성
	증감식;
	}
	*/
	int c_class = 1;
	while (c_class <= 10) {
		printf("c언어 수집 %d \n", c_class);
		c_class++;
	}

	//whell, if활용 6단 값출력
	int a = 6;
	while (a < 60) {
		if (a % 6 == 0) {
			printf("%d \n", a);
		}
		a++;
	}
		return 0;
}