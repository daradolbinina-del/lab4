#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_CTYPE, "RUS"); 
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("Результаты:\n");
    printf("x (int): %d\n", x);  
    printf("y (float): %f\n", y);  
    printf("z (double): %lf\n", z);

    // Пояснения:  
    // При делении целых чисел результат тоже целый 
    // При float/double происходит преобразование, но уже целочисленное  

    // Явное преобразование типа  
    printf("\nРезультаты с явным преобразованием:\n");
    printf("float: %f\n", (float)a / b);    // Преобразование a в float  
    printf("double: %lf\n", (double)a / b);  // Преобразование a в double  
    printf("float: %f\n", (float)(a / b));   // Сначала деление, потом преобразование  
    printf("double: %lf\n", (double)(a / b)); // Сначала деление, потом преобразование  

    return 0;
}