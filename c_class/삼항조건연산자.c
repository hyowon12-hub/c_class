#include <stdio.h>
int main(void)
{
	//�������ǿ�����
	//���ǽ� ? ������ �̰� ��µ�(ture)  : Ʋ���� �̰� ��µ�(false)
	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d", twenty);

	//���� 1 : ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦���� 0, Ȧ���� 1�� ���
	//��¸޽��� : ����� �Է��Ѽ��ڴ� *�̸� ��� : *
	int inputnum;
	int result2;
	printf("�����ϴ¼��ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &inputnum);
	result2 = inputnum % 2 == 0 ? 0 : 1;
	printf("����� �����ϴ� ���ڴ� %d�̸� ��� : %d ", inputnum, result2);
	return 0;
}