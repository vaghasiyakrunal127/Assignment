#include <stdio.h>

int main() {
    float a, b, c, si;

    printf("Enter Principal Amount: ");
    scanf("%f", &a);

    printf("Enter Rate of Interest: ");
    scanf("%f", &b);

    printf("Enter Time (Month): ");
    scanf("%f", &c);

    si = (a * b * c) / 100;

    printf("S1000imple Interest = %.2f", si);

    return 0;
}
