#include <stdio.h>
void sayhello()
{
	printf("Hello World \n");
}
int add(int a, int b)
{
	return a + b;
}
void name(char* name)
{
	printf("Hello, %s \n", name);
}
int main(void)
{
	
	
	//void ����
	sayhello();
	int result = add(5,3);
	printf("result : %d\n", result);
	//�Ű����� ����
	name("ȿ��");

	/*
	�Լ�
	��ȯ�� �Լ� �̸�(�Ű�����)
	{
		return ������ ��;
	}
	��ȯ�� : �Լ��� ����� ��Ÿ���� ����� �ڷ���
	�Լ��̸� : ȣ���� �� ����� �̸�(������ �������)
	�Ű����� : �Լ��� �۾��� �����ϱ� ���� �ʿ��� �Է°�(���� ���� ����)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ �����ִ� ��ɾ�(viod�϶� ��������)

	�Լ��� ���� ���� : �ڵ峪 ����� �ѹ��� ������� �ʰ� ������ �ݺ��� �� �־, 
								���������� ������, �ߺ��Ǵ� �ڵ带 ���� �� �ִ�
	*/
	return 0;
}