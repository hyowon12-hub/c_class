#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�1){
	if(���ǽ�2){
	���ǽ�1,2�� �����Ҷ� �ڵ� ����
	}
	}
	*/
	int num1 = 250108, num1check;
	int password = 112233, passwordcheck;
	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &num1check);

	printf("��й�ȣ�� �Է����ּ��� : ")
		scanf_s("%d", &passwordcheck);

	if (num1 == num1check) {
		if (password == passwordcheck) {
			printf("%d�� �α��� �Ǿ����ϴ�.", num1check);
		}
		else {
			printf("��й�ȣ�� ��ġ�����ʽ��ϴ�.");
		}
	}
	//����Ʈ������/ if��/else/elseif
	return 0;
}