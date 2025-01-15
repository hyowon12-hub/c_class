#include <stdio.h>
int main(void)
{
	/*
	&and : 대응하는 각 비트의 값이 모두 1일때만 1을 반환	아니면	0을 반환
	| or : 대응하는 각 비트의 값이 하나라도 1이면 1을 반환	아니면	0을 반환
	^ xor : 대응하는 각 비트의 값이 다르면 1을 반환
	~ not : 비트의 값을 반전시킴(1이면 0, 0이면 1)
	*/
	int bit_five = 5; //00000101 - 11111010
	int bit_three = 3;//00000011
	printf("bit_five & bit_three : %d\n", bit_five & bit_three);
	printf("bit_five | bit_three = %d\n", bit_five | bit_three);
	printf("bit_five ^ bit_three = %d\n", bit_five ^ bit_three);
	printf("~bit_five = %d\n", bit_five, ~bit_five);//bit_three = -4 , bit_five = -6
	return 0;
	/*
	오늘	배운 내용 정리
	1. 논리연산자(or, and, not, xor) 
	2. 삼항조건연산자(짝수를 구하는 공식 : 값  % 2 == 0 ? 0 : 1)
	3.비트단위 연산자 : not
	*/
}