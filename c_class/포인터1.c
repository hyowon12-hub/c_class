#include <stdio.h>
int main(void)
{
	//포인터는 주소값을 나타냄
	//포인터는 메모리의 주소를 가르키고 있는 변수이다
	//a를선언후 a의 주소를 가리키고 있다 ->데이터에 접근 가능
	//주소 가져오기 : 변수의 주소를 얻으려면 &를 사용해서 가져올것
	//주소 따라가기 : 포인터를 통헤 주소 안의 데이터에 접근하려면 *을 사용한다
	int a = 10;
	double b = 3.14;
	int* p = &a;//*을 사용하면 주소를 저장하는 포인터 변수 , p에 초기화
	
	printf("%p", &a);//포인터를 사용할 때 %p를 사용함
	//난수생성 : time, stdlib로 한다
	//배열 
	return 0;
}