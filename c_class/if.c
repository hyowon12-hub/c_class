#include <stdio.h>
int main(void)
{
	/*
	if(���ǹ�){
	������ ������ ��� ������ �ڵ��ۼ�
	} 
	else{
		������ ���� ������	��� ������ �ڵ��ۼ�
	}
	if���� �Ұ�ȣ���� ture, false �� �����µ� true�� ��쿡�� ����

	if(���ǽ�)
		������ �ڵ尡 �������ϸ�{}��������
	*/
	int ifnumber = 10;
	if (ifnumber > 500){
		printf("%d �� 500���� �۴�? �� ���� ������ ���Դϴ�.");
	}
	if (ifnumber == 3) {
		printf("%d �� 3�� ����", ifnumber);
	}
		//����ڷκ��� ��������	�Է¹޾Ƽ� ���ǹ����� �����, 10000�� �̻��� �� 
		//�Ϸ翡 *****�� �ȴٴ� ����ؿ�
	int ifnum;
	printf("����� �Ϸ翡 �󸶳� �ȳ���? : ");
	scanf_s("%d", &ifnum);
			if (ifnum >= 10000){
				printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ� ���� �����Դϴ�", ifnum);
			}
			char alpha = 'A';
			if (alpha == 'B') {
				printf("alphas�� B�� �ٸ��ϴ�.");
			}
			int likenum;
			printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
			scanf_s("%d", likenum);
			if (likenum >= 10) {
				printf("����� �����ϴ� ���ڴ� 10 �̻��̱���~~")
			}
			else {
				printf("����� �����ϴ� ���ڴ� 10�̸��̱���~~")
			}
	return 0;
}