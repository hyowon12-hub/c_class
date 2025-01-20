#include <stdio.h>
int main(void)
{
	/*
	for문의 브레이크문
    for (초기값, 조건식, 증감식){
	break;
	}
	*/
	for (int i = 0; i <= 10; i++) {
		if (i == 6) {
			break;
		}
		printf("%d \n", i);
	}
	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d \n", i);
		i++;
	}
	return 0;
}