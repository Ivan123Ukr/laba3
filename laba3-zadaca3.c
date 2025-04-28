#include <stdio.h>

int main() {
    int episode;

    printf("Введіть номер серії (1-10): ");
    scanf("%d", &episode);

    switch (episode) {
        case 1:
            printf("Серія 1: 'Descenso' – 28 серпня 2015\n");
            break;
        case 2:
            printf("Серія 2: 'The Sword of Simón Bolívar' – 28 серпня 2015\n");
            break;
        case 3:
            printf("Серія 3: 'The Men of Always' – 28 серпня 2015\n");
            break;
        case 4:
            printf("Серія 4: 'The Palace in Flames' – 28 серпня 2015\n");
            break;
        case 5:
            printf("Серія 5: 'There Will Be a Future' – 28 серпня 2015\n");
            break;
        case 6:
            printf("Серія 6: 'Explosivos' – 28 серпня 2015\n");
            break;
        case 7:
            printf("Серія 7: 'You Will Cry Tears of Blood' – 28 серпня 2015\n");
            break;
        case 8:
            printf("Серія 8: 'La Gran Mentira' – 28 серпня 2015\n");
            break;
        case 9:
            printf("Серія 9: 'La Catedral' – 28 серпня 2015\n");
            break;
        case 10:
            printf("Серія 10: 'Despegue' – 28 серпня 2015\n");
            break;
        default:
            printf("Помилка: в сезоні 1 всього 10 серій.\n");
            break;
    }

    return 0;
}
