#include <stdio.h>
int main(void)
{
	//�ڷ� ����ȯ
	double change_number = 10;
	printf("%f\n", change_number);//double�� %f	
	int changee_number2 = 5.11223; //�Ҽ����� �ս�(�Ҽ��� ������)
	printf("%d\n", changee_number2);

	printf("%d\n", (short)1.1234);
	printf("%d\n", (int)1.1234);	
	printf("%d\n",(double)22);
	printf("%f\n", (float)22);

	float f = 3.14f; //���� �ڿ� f�� ���̸� ������ ���� �ʴ´�.	
	printf("%f\n", f);
	//2���� ����(����) : 1+1 = 10, 0+1 = 1,1+0 = 1, 0+0 = 0
	//�ڼ��� ���� : ���� 51��
	//�Ǽ��� ǥ����� : �ε��Ҽ���(53��)
	//��Ȯ�� ���� �ƴ� ����Ѱ��� ǥ���Ѵ�.

	return 0;

}