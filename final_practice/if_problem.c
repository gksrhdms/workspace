# include <stdio.h>

// 1. 사용자로부터 나이를 입력받고, 20살 이상이면 주류를 판매하는 시스템

// int main() {
//     int age;
//     printf("나이를 입력하세요: ");
//     scanf("%d", &age);

//     if(age >= 20) {
//         printf("주류를 구매할 수 있습니다.\n");
//     }
//     else {
//         printf("주류를 구매할 수 없습니다.\n");
//     }

// }

// 2. 0~100점을 입력 받고, 학점으로 변환해서 출력

// int main() {
//     int score;
//     printf("점수를 입력하세요: ");
//     scanf("%d", &score);

    
// }
// 3. 두 수를 입력받고 크기를 비교하는 프로그램

int main() {
    int a, b;
    printf("비교할 두 수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if(a>b) {
        printf("%d가 더 큽니다.\n", a);
    }
    else if(a==b) {
        printf("%d와 %d는 같습니다.\n", a, b);
    }
    else {
        printf("%d가 더 큽니다.\n", b);
    }
}

