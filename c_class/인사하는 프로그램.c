#include <stdio.h>

void hello(char* name)
{
	printf("�ȳ��ϼ��� %s�� \n", name);
}
int main(void)
{
	char name[20];
	printf("�̸��� �Է��ϼ���");
	scanf_s(" % s", name,(unsigned) sizeof(name));
	hello(name);
	//����ڿ��� �̸��� �Է¹޾Ƽ� �ȳ��ϼ���***�� �̶�� �λ��ϴ� ���α׷�
	return 0;
}