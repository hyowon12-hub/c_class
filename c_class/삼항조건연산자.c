#include <stdio.h>
int main(void)
{
	//삼항조건연산자
	//조건식 ? 맞으면 이게 출력됨(ture)  : 틀리면 이게 출력됨(false)
	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("더 큰 값은 : %d", twenty);

	//조건 1 : 사용자에게 숫자를 입력받아서 그 숫자가 짝수면 0, 홀수면 1을 출력
	//출력메시지 : 당신이 입력한숫자는 *이며 결과 : *
	int inputnum;
	int result2;
	printf("좋아하는숫자를 입력하세요 : ");
	scanf_s("%d", &inputnum);
	result2 = inputnum % 2 == 0 ? 0 : 1;
	printf("당신이 좋아하는 숫자는 %d이며 결과 : %d ", inputnum, result2);
	return 0;
}