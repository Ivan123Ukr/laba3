#include <stdio.h>
#include <math.h> // для sqrt()

int main() {
    int s, t;
    double k; // використовуємо double, бо буде sqrt()

    // Ввід значень
    printf("Введіть ціле число s: ");
    scanf("%d", &s);
    printf("Введіть ціле число t: ");
    scanf("%d", &t);

    // Обчислення k
    if (s < 4) {
        k = t * t + 2 * s * s + s;
    } 
    else if (s == 4) {
        if (1 - t == 0) {
            printf("Помилка: ділення на нуль у виразі при s = 4!\n");
            return 1; // завершити програму з кодом помилки
        }
        double pid_korenem = (s + 5.0) / (1 - t);
        if (pid_korenem < 0) {
            printf("Помилка: підкореневий вираз від'ємний!\n");
            return 1;
        }
        k = sqrt(pid_korenem);
    } 
    else { // s > 4
        k = 50 + s * s + t;
    }

    // Вивід результату
    printf("Значення k = %.2lf\n", k);

    return 0;
}
