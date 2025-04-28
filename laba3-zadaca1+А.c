#include <stdio.h>
#include <math.h>

int main() {
    int s, t;
    double k;

    printf("Введіть ціле число s: ");
    scanf("%d", &s);
    printf("Введіть ціле число t: ");
    scanf("%d", &t);

    if (s < 4)
        k = t * t + 2 * s * s * t + s;
    else if (s == 4) {
        if (t == 0) {
            printf("Помилка: ділення на нуль.\n");
            return 1;
        } else {
            k = sqrt((double)(s + 5) / (-t));
        }
    } else
        k = 50 + s * s + t;

    printf("Значення k = %.2f\n", k);

    return 0;
}