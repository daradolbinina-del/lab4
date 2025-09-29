#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	puts("введите символ");
	scanf_s("%c", &c);
	puts("введите целое число");
	scanf_s("%d", &i);
	puts("введите вещественное число");
	scanf_s("%f", &f);
	puts("введите вещественное число в экспоненциальном формате");
	scanf_s("%e", &d);
	printf("%c - символ\n%d - целое число\n%f - вещественное число\n%e - вещественное число в экспоненциальном формате\n", c, i, f, d);
	printf("%.0f - целая часть\n%f - дробная часть\n", f - (f - (int)f), f - (int)f);
	printf("Шестнадцатиричный код символа - %x\nДесятичный код символа - %d\n", c, c);
	printf("Число, соответствующее 1 / i - %d", 1 / i);
	return 0;
}