#include <stdio.h>
int main(void)
{
	/*
	if(���ǹ�){
	}
	else if(����2){
	����2�� �����Ұ�� ����
	}
	else if(����3){
		����2�� ������ ���
	}
	(����3)
	*/
	int num_a;
	printf("�����Է� : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("�����\n");
	}
	//������ 90�� �̻��̸� A����,�� ���߾��!
	//80�̻� =B
	//70�̻� = C
	//60 = D
	//������ ������ �����
	int num_b;
	printf("�����Է� : ");
	scanf_s("%d", &num_b);
	if (num_b > 90) {
		printf("A���� �� ���߾��!");
	}
	else if (num_b >= 80) {
		printf("B����");
	}
	else if (num_b >= 80){
		printf("c����");
	}

	//�������� ������
	int num_c;
	printf("�����Է� : ");
	scanf_s("%d", &num_c);
	if (num_c >= 7) {
		printf("���ƴ� 800��");
	}
	else if (num_c >= 19) {
		printf("�л� 1200��");
	}
	else if (num_c >= 34) {
		printf("û���� 1600��");
	}
	else if (num_c >= 59) {
		printf("�߳���2000��");
	}
	else if (num_c >= 150) {
		printf("����� �����񹫷��Դϴ�.");
	}
	else if (num_c >= 150) {
		printf("���� �߸���������...����� �ƴѵ�..");
	}
	return 0;
}
