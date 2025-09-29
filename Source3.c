#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int A;
	int B;
	int C;
	int D;
	int gg;
	printf("Введите 4 числа 1 или 0 (срабатывание датчика 1-повторяющееся движение, 0-шум):\n");
	scanf_s("%d %d %d %d", &A, &B, &C, &D);
	gg = (A == 1) && (B == 1) && (C == 1) && (D == 0) || (A == 0) && (B == 1) && (C == 1) && (D == 1) || (A == 1) && (B == 0) && (C == 1) && (D == 1) || (A == 1) && (B == 1) && (C == 1) && (D == 0) || (A == 1) && (B == 1) && (C == 1) && (D == 1);
	printf("Запись активна(1-да,0-нет):%d\n", gg);
	return 0;
}