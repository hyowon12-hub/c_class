#include <stdio.h>
int main(void)
{
	/*
	for(초기,조건,증감){
	continue;
	실행할 코드
	}

	while(조건){

	*/
	int for_continue;
	for (for_continue = 0;for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) {
			continue;
		}
		printf("%d \n", for_continue);
	}


int num = 1;
while(num <= 10) {
	num++;
	if (num % 2 == 0){
		continue;
	}
	printf("%d \n", num);
	}
	return 0;
}