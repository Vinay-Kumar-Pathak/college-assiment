#include "digit_product.h"

int product_of_digits(int num) {
    if (num == 0)
        return 0;

    int product = 1, digit;
    while (num > 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    return product;
}