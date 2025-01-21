#include <stdio.h>
int main(void)
{
	char string_text[] = "안녕하세요!";//한글 문자는 한 글자당 2바이트 차지
	printf("문자열 변수 string_text의 길이는 : %zd \n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("영어 문자열 english_text의 길이는 : %zd \n ", sizeof(english_text));

	char long_text[] = "hello!";
	printf("문자열 변수 long_text의 길이는 : %zd \n ", sizeof(long_text));

	//

	//printf("배열 iong_text에 저장된 문자열의 길이 : %zd \n", strlen(long_text));//strlen;
	printf("%s\n", long_text);

	//

	char name[30] = "my name is 은지";
	printf("%s \n", name);

	char name_1[30] = "my name is 은지";
	name_1[10] = '\0';//길이는 그대로인데 '은지'만 잘림
	printf("%s \n", name_1);

	//

	char scanfs_string[50];
	printf("scanfs_string 문자열을 입력하세요 : ");
	scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string));
	printf("%s \n", scanfs_string);

	//

	char gets_string[50];
	printf("gets_s로 문자열을 입력하세요 : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	return 0;
}