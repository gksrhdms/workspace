#include <stdio.h>

// 문제: while문을 사용해서 1~100까지의 값을 홀수합, 짝수합으로 계산하세요.

int main() {
    int i=1;
    int evenSum = 0;
    int oddSum = 0;

    while(i<=100) {
        if(i%2==0) {
            evenSum += i;
        }
        else {
            oddSum += i;
        }

        i += 1;
    }
    printf("짝수합: %d\n", evenSum);
    printf("홀수합: %d", oddSum);
}