#include <stdio.h>
int main(void)
{
	//¿¬»êÀÚÀÇ Á¾·ù
	// »ê¼ú¿¬»êÀÚ
	//1. + : µ¡¼À
	//2. - : »¬¼À
	//3. * : °ö¼À
	//4. / : ³ª´°¼À
	//5. % : ³ª¸ÓÁö
	int number1 = 7, number2 = 3;
	printf("%d+%d=%d\n", number1, number2, number1 + number2);
	printf("%d-%d=%d\n", number1, number2, number1 - number2);
	printf("%d*%d=%d\n", number1, number2, number1 * number2);
	printf("%d/%d=%d\n", number1, number2, number1 / number2);
	printf("%d%%%d=%d\n", number1, number2, number1 % number2);

	int num1 = 1;
	int num3 = 6;
	float num2 = 1.2;
	printf("%d+%f=%f\n", num1, num2, num1 + num2);

	return 0;
}