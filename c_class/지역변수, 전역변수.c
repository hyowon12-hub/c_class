#include <stdio.h>
int number = 50;

void staticFunction()
{
	static int num = 0;
	num++;
	printf("num : %d \n", num);
}
int localFunction(int a)
{
	int result = 5;
	return number + a;
}
int main(void)
{
	int a = 100;
	printf("%d \n", a);
	int result = localFunction(a);
	int number = 40;
	printf("%d\n ", result);
	printf("%d\n", number);
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	//�������� : ������ �ۿ��� �����
	//Ư¡ : ���������� ���������� �̸��� �ߺ��Ҷ� ���������� �켱������ �����

	/*
	��������
	1. �߰�ȣ ������ ����� ��� ������ �ش��Լ������� ��� ����
	2. �Լ��� ������ �� ���Ǵ������ �Ű������� �������� �̴�
	3. ���������� �ڽ��� ����� ���� �� �ٸ����� ���Ұ�
	4. ������ �̸� �ߺ�x�ٸ��Լ������¤�

	�������� 
	1. ������ �ۿ��� ����� ����
	2. ��� �Լ����� ��� ����
	3. ���������� �켱��
	4. ���α׷��� ���۵ʰ� ���ÿ� �޸� ���� �Ҵ� ���α׷� ����ñ��� ����
	
	����ƽ����
	1. static�̶�� Ű����� ����
	2. ����, ���� ��� ���� ����
	3. ���������� �Բ� �Լ� ȣ�� �޸� ������� ����
	4. ���α׷� ����ñ��� ���� ����
	*/
	return 0;
}