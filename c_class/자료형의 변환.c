#include <stdio.h>
int main(void)
{
	//자료 형변환
	double change_number = 10;
	printf("%f\n", change_number);//double은 %f	
	int changee_number2 = 5.11223; //소수부의 손실(소수가 버려짐)
	printf("%d\n", changee_number2);

	printf("%d\n", (short)1.1234);
	printf("%d\n", (int)1.1234);	
	printf("%d\n",(double)22);
	printf("%f\n", (float)22);

	float f = 3.14f; //숫자 뒤에 f를 붙이면 오류가 나지 않는다.	
	printf("%f\n", f);
	//2진수 덧샘(정수) : 1+1 = 10, 0+1 = 1,1+0 = 1, 0+0 = 0
	//자세한 설명 : 교재 51쪽
	//실수의 표현방식 : 부동소수점(53쪽)
	//정확한 값이 아닌 비슷한값을 표현한다.

	return 0;

}