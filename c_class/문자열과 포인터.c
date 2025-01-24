#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "bad";
	good[0] = 'H';
	//good = new good = 불가능
	printf("%s, %s", good, bad);

	//bad[0] = 's'; = 컨탠츠 바꾸기 불가능
	bad = "new bad";//주소 바꾸기 가능 
	printf("%s, %s", good, bad);
	return 0;
}