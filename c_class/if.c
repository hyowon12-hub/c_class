#include <stdio.h>
int main(void)
{
	/*
	if(조건문){
	조건을 만족할 경우 실행할 코드작성
	} 
	else{
		조건의 값이 거짓일	경우 실행할 코드작성
	}
	if문의 소괄호에는 ture, false 로 나뉘는데 true일 경우에만 실행

	if(조건식)
		실행할 코드가 한줄일하면{}생략가능
	*/
	int ifnumber = 10;
	if (ifnumber > 500){
		printf("%d 이 500보다 작니? 에 대한 물음은 참입니다.");
	}
	if (ifnumber == 3) {
		printf("%d 는 3과 같아", ifnumber);
	}
		//사용자로부터 걸음수를	입력받아서 조건문으로 만들고, 10000보 이상일 때 
		//하루에 *****보 걷다니 대단해요
	int ifnum;
	printf("당신은 하루에 얼마나 걷나요? : ");
	scanf_s("%d", &ifnum);
			if (ifnum >= 10000){
				printf("하루에 %d보 걷다니 대단해요 좋은 습관입니다", ifnum);
			}
			char alpha = 'A';
			if (alpha == 'B') {
				printf("alphas는 B와 다릅니다.");
			}
			int likenum;
			printf("당신이 좋아하는 숫자를 입력하세요 : ");
			scanf_s("%d", likenum);
			if (likenum >= 10) {
				printf("당신이 좋아하는 숫자는 10 이상이군요~~")
			}
			else {
				printf("당신이 좋아하는 숫자는 10미만이군요~~")
			}
	return 0;
}