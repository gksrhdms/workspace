#include <stdio.h>

// ¦����, Ȧ���� ����ϱ�

int main() {
    int evenSum = 0;  // ¦����
    int oddSum = 0;   // Ȧ����

    for(int i=1; i<=100; i++) {
        // Ȧ¦ �Ǻ� ���ǽ�
        if (i % 2 == 0) {
            evenSum += i;
        }
        else {
            oddSum += i;
        }
    }

    printf("¦������ %d", evenSum);
    printf("Ȧ������ %d", oddSum);
}