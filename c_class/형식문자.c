#include <stdio.h>
int main(void)
	{
		// %d : char, short, int(��ȣ�ִ� 10�� ����)
		//%ld : long (��ȣ�ִ� 10�� ����)
		//%lld : long long (��ȣ�ִ� 10�� ����)
		//%u : unsigned int(��ȣ���� 10�� ����)
		//%f : float(10���� ����� �ε��Ҽ��� �Ǽ�)
		//%lf : double, long double(10�� �Ǽ�)
		//%c : char, short, int(���� �����ϴ� ����)
		//%s : ���ڿ�
		//%p : ������ �ּҰ�
		//%i : int ��� 
		//�������� C��� ���������� �˻� �� ����*


		long long x = 2100000000; 
		printf("�� : %lld,\n", x);
	
		printf("%10d\n", 42);// 10
		printf("%5d\n", 12345);
		printf("%5d\n", 123456);
		printf("%-10d", 123456);
		printf("%d\n", 1);
		printf("%010d", 123456);
		return 0;
	}	