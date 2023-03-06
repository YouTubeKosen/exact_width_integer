#include <stdio.h>
#include <stdint.h>

int undefined_size;
uint32_t defined_size;

int main(void) {
    int hoge=0, fuga=1, sum;
    float hoge_f=0, fuga_f=1, sum_f;

    sum = hoge + fuga;
    sum_f = hoge_f + fuga_f;
    printf("%d, %f\n", sum, sum_f);
}