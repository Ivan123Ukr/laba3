#include <stdio.h>
#include <stdbool.h>

int main() {
    float a, b, c, x, y;
    printf("Введіть розмір a цеглини: ");
    scanf("%f", &a);
    printf("Введіть розмір b цеглини: ");
    scanf("%f", &b);
    printf("Введіть розмір c цеглини: ");
    scanf("%f", &c);
    printf("Введіть ширину отвору x: ");
    scanf("%f", &x);
    printf("Введіть висоту отвору y: ");
    scanf("%f", &y);

    bool can_pass = false;

    if ((a <= x && b <= y) || (a <= y && b <= x)) {
        can_pass = true;
    } else if ((a <= x && c <= y) || (a <= y && c <= x)) {
        can_pass = true;
    } else if ((b <= x && c <= y) || (b <= y && c <= x)) {
        can_pass = true;
    }

    if (can_pass) {
        printf("Цеглина пройде в отвір.\n");
    } else {
        printf("Цеглина не пройде в отвір.\n");
    }

    return 0;
}