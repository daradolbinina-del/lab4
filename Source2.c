#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n;
    int fir;
    int las;
    int sum;

    printf("Введите трехзначное число:\n");
    scanf_s("%d", &n);
    printf("Введено число:%d\n", n);

    fir = n / 100;
    las = n % 10;
    sum = fir + (n / 10 % 10) + las;
    printf("Первое число равно: %d\nПоследнее число равно:%d\nСумма чисел равна:%d", fir, las, sum);

    return 0;
}