#include <stdio.h>
int main(void)
{
	//1. �Է��� �����Ϳ� �����ϴ� �ڷ���
	//2. �Է��� �����Ͱ� ����� �޸𸮰��� (����)
	//scanf->scanf_s�� ����

	int num;
	//scanf_s("%d",&num);
	//scanf_s("%d\n", &num);//Ʋ��
	//scanf_s("%d", &num);//�Է��� ���� ����
	//printf("\n");//�ٹٲ��� ���
	//scanf_s("�Է� : %d", num);//Ʋ��

	scanf_s("�Է� : ");//�Է��� ���� ����
	scanf_s("%d", &num);//���

	int x, y, z, total ;
	printf("���� 3�� �Է� : ");
	scanf_s("%d#%d#%d", &x, &y, &z);
	total = x + y + z;
	printf("%d%d%d =%d", x, y, z, total);

	float funm;
	printf("��	�� �Է� : "); 
	scanf_s("%f", &funm);
	printf("�Էµ� �� : %.2f", funm);

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%d", &scanf_pi);
	printf("�Էµ� �� : %f", scanf_pi);




	return 0;
}