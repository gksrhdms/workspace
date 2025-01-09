#include <stdio.h>

// 3개의 수를 입력받고, 큰 숫자로 정렬해서 출력하는 프로그램

int main() {
    int num1 = 20, num2 = 10, num3 = 50;  // 고정(바꾸면 안됨)
    int tmp;

    for(int i=0; i<2; i++) {
        if(num1 < num2) {
            tmp = num1;
            num1 = num2;
            num2 = tmp;
        }

        else if(num2 < num3) {
            tmp = num2;
            num2 = num3;
            num3 = tmp;
        }
    }

    printf("%d > %d > %d", num1, num2, num3);  // 고정(바꾸면 안됨)


}