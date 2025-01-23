#include <stdio.h>
int main(void)
{
	//2차원 배열을 선언 후 구구단을 출력하기
	int a[8][9];
	int i, j;
	for (i = 0;i < 8;i++){
		printf("%d단\n", i + 2);
		for (j = 0;j < 9;j++){
			a[i][j] = (i + 2) * (j + 1);
			printf("%d * %d =%d\n",i+2,j+1, a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}