#include <stdio.h>
int main(void)
{
	/*
	for(){
		for(){
			}
		}
	*/
	int first_for, second_for;
	for (first_for = 1; first_for <= 3; first_for++) {
		for (second_for = 1; second_for <= 5; second_for++) {
			printf("%d행 %d열 \n", first_for, second_for);
		}
		printf("\n");
	}
	//반복문  : i, 중첩 반복문 : j 로 많이 돌린다.

	/*
	오늘 배운것
	1. dowhile (최소 한번 실행)
	2. for문 (초기화;조건식;증감식)
	3. 무한루프 탈출 : 컨트롤c,  break,  continue
	*/
	return 0;
}