#include <stdio.h>
int main(void)
{
	/*
	for(�ʱ�,����,����){
	continue;
	������ �ڵ�
	}

	while(����){

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