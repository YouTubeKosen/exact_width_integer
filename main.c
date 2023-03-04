#include <stdio.h>

int main(void) {
    int hoge;
    float fuga = 3.4e38;
    hoge = fuga;
    printf("%d\n", hoge);
}