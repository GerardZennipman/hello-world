#include "standard.h"
#include "test.h"

int32_t test_add(int32_t a, int32_t b)
{
    int32_t sum;

    sum = a + b;

    return sum;
}

int32_t test_sub(int32_t a, int32_t b)
{
    int32_t difference;

    difference = a - b;

    return difference;
}

int32_t test_mul(int32_t a, int32_t b)
{
    int32_t product;

    product = a * b;

    return product;
}

int32_t test_div(int32_t a, int32_t b)
{
    int32_t quotient;

    quotient = a / b;

    return quotient;
}
