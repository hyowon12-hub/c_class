#include <stdio.h>
int main(void)
{
	/*
	if(조건문){
	}
	else if(조건2){
	조건2를 만족할경우 실행
	}
	else if(조건3){
		조건2를 만좃할 경우
	}
	(조건3)
	*/
	int num_a;
	printf("숫자입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이\n");
	}
	//학점이 90점 이상이면 A학점,참 잘했어요!
	//80이상 =B
	//70이상 = C
	//60 = D
	//범위에 없으면 재시험
	int num_b;
	printf("점수입력 : ");
	scanf_s("%d", &num_b);
	if (num_b > 90) {
		printf("A학점 참 잘했어요!");
	}
	else if (num_b >= 80) {
		printf("B학점");
	}
	else if (num_b >= 80){
		printf("c학점");
	}

	//복합조건 버스비
	int num_c;
	printf("나이입력 : ");
	scanf_s("%d", &num_c);
	if (num_c >= 7) {
		printf("유아는 800원");
	}
	else if (num_c >= 19) {
		printf("학생 1200원");
	}
	else if (num_c >= 34) {
		printf("청년은 1600원");
	}
	else if (num_c >= 59) {
		printf("중년은2000원");
	}
	else if (num_c >= 150) {
		printf("노년은 버스비무료입니다.");
	}
	else if (num_c >= 150) {
		printf("무언가 잘못됨을감지...사람이 아닌데..");
	}
	return 0;
}
