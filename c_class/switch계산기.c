#include <stdio.h>
int main(void)
{
	//+-*/
	//���� ������1/ ������2
	//������ Ư��ó��
	int a, b;
	char num;
	printf("�����ڸ� �Է����ּ���(+,-,*,/) : ");
	scanf_s("%c", &num,1);
	printf("�� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b");
	switch (num) {
	case 1: printf("%d + %d = %d\n", a ,b ,a + b);
		break;
	case 2: printf("%d -%d = %d\n", a, b, a - b);
		break;
	case 3: printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 4: printf("%d / %d = %d\n", a, b, a / b);
	}
	else {
		printf("0���� ���� �� �����ϴ�.\n");
	}
		break;

	default: printf("��ȿ���� ���� ������");
		break;

	

	return 0;
}