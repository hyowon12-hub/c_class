#include <stdio.h>
int main(void)
{
	int total = 86 + 75 + 88 + 60 + 96;
	float average = total / 5.0;
	printf("짱구의 평균은 : %0.1f점 입니다.\n",average);

	//철수의 평균
	int total2 = 64 + 56 + 87.5 + 76.8 + 96.9;
	float avg= total2 / 5.0;
	printf("철수의 평균은\n %.2f점 입니다.", avg);
	return 0;
}