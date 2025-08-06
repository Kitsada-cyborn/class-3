#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);
    b = (a < 1 || a > 100) * 1
         + (a >= 1 && a <= 100 && a % 2 == 0) * 2;

    switch (b) {
        case 2:
            printf("%d is even\n", a);
            break;
        case 1:
            printf("%d is out of range\n", a);
            break;
        default:
            printf("%d is odd\n", a);
    }

    return 0;
}
