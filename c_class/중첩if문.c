#include <stdio.h>
int main(void)
{
	/*
	if(조건식1){
	if(조건식2){
	조건식1,2를 만족할때 코드 실행
	}
	}
	*/
	int num1 = 250108, num1check;
	int password = 112233, passwordcheck;
	printf("학번을 입력해주세요 : ");
	scanf_s("%d", &num1check);

	printf("비밀번호를 입력해주세요 : ")
		scanf_s("%d", &passwordcheck);

	if (num1 == num1check) {
		if (password == passwordcheck) {
			printf("%d님 로그인 되었습니다.", num1check);
		}
		else {
			printf("비밀번호가 일치하지않습니다.");
		}
	}
	//시프트연산자/ if문/else/elseif
	return 0;
}