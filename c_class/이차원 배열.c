#include <stdio.h>
int main(void)
{
	//2���� �迭 : [*]�� 2�� �ִ� �迭�̴�, ��øfor���� ���� ���δ�.
	//int a[3] [4]int [3]�� [4]��  = 2�����迭 (12ĭ) ǥ��(���� �̸�) : a[0][0], a[0][1], a[1][0], a[2][3]���
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

