#include <stdio.h>

int main() {
    char arrNum[4] = {20, 10, 30};

    for(int i=0; i<4; i++) {
        int temp;
        temp = arrNum[i];
        arrNum[i] = arrNum[i+1];
        arrNum[i+1] = temp;
    }
    
    printf("정렬: ");
    for(int i=0; i<3; i++) {
        printf("%d ", arrNum[i]);
    }
}