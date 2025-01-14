#include <stdio.h>
int main(void)
{
	//1. 입력할 데이터에 대응하는 자료형
	//2. 입력할 데이터가 저장될 메모리공간 (변수)
	//scanf->scanf_s로 변경

	int num;
	//scanf_s("%d",&num);
	//scanf_s("%d\n", &num);//틀림
	//scanf_s("%d", &num);//입력을 받은 다음
	//printf("\n");//줄바꿈을 출력
	//scanf_s("입력 : %d", num);//틀림

	scanf_s("입력 : ");//입력을 받은 다음
	scanf_s("%d", &num);//출력

	int x, y, z, total ;
	printf("정수 3개 입력 : ");
	scanf_s("%d#%d#%d", &x, &y, &z);
	total = x + y + z;
	printf("%d%d%d =%d", x, y, z, total);

	float funm;
	printf("실	수 입력 : "); 
	scanf_s("%f", &funm);
	printf("입력된 값 : %.2f", funm);

	float scanf_pi;
	printf("원주율 입력 : ");
	scanf_s("%d", &scanf_pi);
	printf("입력된 값 : %f", scanf_pi);




	return 0;
}