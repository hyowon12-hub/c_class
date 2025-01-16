#include <stdio.h>
int main(void)
{
	//지하철 요금문제
	int age1;
	age1 = 20;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &age1);
	int  agecheck = age1 >=20 ? 1280 : 800;
	printf("지하철 요금은 : %d원 입니다.", age1, agecheck);
	


	
	return 0;
}