#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "bad";
	good[0] = 'H';
	//good = new good = �Ұ���
	printf("%s, %s", good, bad);

	//bad[0] = 's'; = ������ �ٲٱ� �Ұ���
	bad = "new bad";//�ּ� �ٲٱ� ���� 
	printf("%s, %s", good, bad);
	return 0;
}