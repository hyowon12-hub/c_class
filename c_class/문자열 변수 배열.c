#include <stdio.h>
int main(void)
{
	char string_text[] = "�ȳ��ϼ���!";//�ѱ� ���ڴ� �� ���ڴ� 2����Ʈ ����
	printf("���ڿ� ���� string_text�� ���̴� : %zd \n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("���� ���ڿ� english_text�� ���̴� : %zd \n ", sizeof(english_text));

	char long_text[] = "hello!";
	printf("���ڿ� ���� long_text�� ���̴� : %zd \n ", sizeof(long_text));

	//

	//printf("�迭 iong_text�� ����� ���ڿ��� ���� : %zd \n", strlen(long_text));//strlen;
	printf("%s\n", long_text);

	//

	char name[30] = "my name is ����";
	printf("%s \n", name);

	char name_1[30] = "my name is ����";
	name_1[10] = '\0';//���̴� �״���ε� '����'�� �߸�
	printf("%s \n", name_1);

	//

	char scanfs_string[50];
	printf("scanfs_string ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string));
	printf("%s \n", scanfs_string);

	//

	char gets_string[50];
	printf("gets_s�� ���ڿ��� �Է��ϼ��� : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	return 0;
}