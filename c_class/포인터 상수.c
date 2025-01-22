#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* PTR = &x;//»ó¼ö
	printf("%d \n", * PTR);
	*PTR = 30;
	printf("%d \n", *PTR);

	PTR = &y;
	return 0;
}