#include <stdio.h>
int main(void)
{
	/*
	for(){
		for(){
			}
		}
	*/
	int first_for, second_for;
	for (first_for = 1; first_for <= 3; first_for++) {
		for (second_for = 1; second_for <= 5; second_for++) {
			printf("%d�� %d�� \n", first_for, second_for);
		}
		printf("\n");
	}
	//�ݺ���  : i, ��ø �ݺ��� : j �� ���� ������.

	/*
	���� ����
	1. dowhile (�ּ� �ѹ� ����)
	2. for�� (�ʱ�ȭ;���ǽ�;������)
	3. ���ѷ��� Ż�� : ��Ʈ��c,  break,  continue
	*/
	return 0;
}