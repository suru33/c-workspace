/*
https://gcc.gnu.org/onlinedocs/gcc-7.5.0/cpp/Include-Syntax.html
*/

#include <stdio.h>
#include "sample_header.h"
# include "sub/sub_header.h"

int main() {
    int a = 100, b = 43;

    printf("sum of %d, %d is %d\n", a, b, sum(a, b));
    printf("sub of %d, %d is %d\n", a, b, sub(a, b));
    return 0;
}