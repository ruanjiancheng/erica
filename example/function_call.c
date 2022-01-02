#include <stdio.h>

int a, b;

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d", add(1, 2));
    return 0;
}