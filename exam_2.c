#include <stdio.h>

int swap(int a, int b);

int swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a=1, b=9;
    swap(a, b);
    printf("a: %d, b: %d", a, b);
}