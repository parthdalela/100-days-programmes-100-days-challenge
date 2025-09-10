#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, middle, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    int t = num;
    while (t >= 10) {
        t /= 10;
        digits++;
    }
    first = t;

    int power = pow(10, digits);
    middle = (num % power) / 10;

    swapped = last * power + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);
    return 0;
}