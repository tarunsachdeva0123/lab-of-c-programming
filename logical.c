#include <stdio.h>

int main() {
    int a = 5, b = 7;

    printf("a = %d, b = %d\n", a, b);

    printf("and = %d\n", a && b);

    printf("or = %d\n", a || b);

    printf("xor = %d\n", (a || b) && !(a && b));

    return 0;
}