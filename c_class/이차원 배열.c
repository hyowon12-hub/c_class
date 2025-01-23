#include <stdio.h>
int main(void)
{
	//2차원 배열 : [*]가 2개 있는 배열이다, 중첩for문과 같이 쓰인다.
	//int a[3] [4]int [3]행 [4]열  = 2차원배열 (12칸) 표기(변수 이름) : a[0][0], a[0][1], a[1][0], a[2][3]등등
	int a[3][4];
	a[0][0] = 10;
	printf("%d \n", a[0][0]);
	int arr[3][4] = {
		{1,2,3,4},
		{ 5,6,7,8},
		{9,10,11,12}
	};
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			arr[i][j] = 10;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

