#include <stdio.h>
#include <math.h>

int main() {
    int s, t;
    double k;

    // Введення значень s і t
    printf("Введіть ціле число s: ");
    scanf("%d", &s);
    printf("Введіть ціле число t: ");
    scanf("%d", &t);

    // Обчислення значення k згідно з умовами
    if (s < 4) {
        k = pow(t, 2) + 2 * pow(s, 2) * t + s;
        printf("k = %.2f\n", k);
    }
    else if (s == 4) {
        double value = (s + 5.0) / (-t);
        if (value < 0) {
            printf("Неможливо обчислити значення виразу (підкореневий вираз < 0)\n");
        } else {
            k = sqrt(value);
            printf("k = %.2f\n", k);
        }
    }
    else { // s > 4
        k = 50 + pow(s, 2) + t;
        printf("k = %.2f\n", k);
    }

    return 0;
}
