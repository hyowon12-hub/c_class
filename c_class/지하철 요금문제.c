#include <stdio.h>
int main(void)
{
	//����ö ��ݹ���
	int age1;
	age1 = 20;
	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &age1);
	int  agecheck = age1 >=20 ? 1280 : 800;
	printf("����ö ����� : %d�� �Դϴ�.", age1, agecheck);
	


	
	return 0;
}