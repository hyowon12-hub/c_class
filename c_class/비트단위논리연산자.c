#include <stdio.h>
int main(void)
{
	/*
	&and : �����ϴ� �� ��Ʈ�� ���� ��� 1�϶��� 1�� ��ȯ	�ƴϸ�	0�� ��ȯ
	| or : �����ϴ� �� ��Ʈ�� ���� �ϳ��� 1�̸� 1�� ��ȯ	�ƴϸ�	0�� ��ȯ
	^ xor : �����ϴ� �� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	~ not : ��Ʈ�� ���� ������Ŵ(1�̸� 0, 0�̸� 1)
	*/
	int bit_five = 5; //00000101 - 11111010
	int bit_three = 3;//00000011
	printf("bit_five & bit_three : %d\n", bit_five & bit_three);
	printf("bit_five | bit_three = %d\n", bit_five | bit_three);
	printf("bit_five ^ bit_three = %d\n", bit_five ^ bit_three);
	printf("~bit_five = %d\n", bit_five, ~bit_five);//bit_three = -4 , bit_five = -6
	return 0;
	/*
	����	��� ���� ����
	1. ��������(or, and, not, xor) 
	2. �������ǿ�����(¦���� ���ϴ� ���� : ��  % 2 == 0 ? 0 : 1)
	3.��Ʈ���� ������ : not
	*/
}