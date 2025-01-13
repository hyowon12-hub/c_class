#include <stdio.h>
int main(void)
	{
		// %d : char, short, int(부호있는 10진 정수)
		//%ld : long (부호있는 10진 정수)
		//%lld : long long (부호있는 10진 정수)
		//%u : unsigned int(부호없는 10진 정수)
		//%f : float(10진수 방식의 부동소숫점 실수)
		//%lf : double, long double(10진 실수)
		//%c : char, short, int(값에 대응하는 문자)
		//%s : 문자열
		//%p : 포인터 주소값
		//%i : int 출력 
		//나머지는 C언어 서식지정자 검색 후 참고*


		long long x = 2100000000; 
		printf("값 : %lld,\n", x);
	
		printf("%10d\n", 42);// 10
		printf("%5d\n", 12345);
		printf("%5d\n", 123456);
		printf("%-10d", 123456);
		printf("%d\n", 1);
		printf("%010d", 123456);
		return 0;
	}	