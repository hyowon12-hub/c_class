#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* PTR = &x;//���
	printf("%d \n", * PTR);
	*PTR = 30;
	printf("%d \n", *PTR);

	PTR = &y;
	return 0;
}