#include <stdio.h>
int main(void)
{
	/*
	자료형 변수명 = 초기화
	do{
	실행시킬 코드;
	증감식;
	}while (조건식);
	*/
	int do_while = 1;
	do {
		printf("do while문 %d 연습중 \n", do_while);
		do_while++;
	} while (do_while <= 10);
	//조건충족하지 않아도 1번코드 실행
	//while 과 다른점 : 최소실행 횟수
	return 0;
}