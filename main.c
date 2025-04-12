// main.c
#include <stdio.h>
#include "digit_product.h"

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = product_of_digits(num);
    printf("Product of digits: %d\n", result);

    return 0;
}