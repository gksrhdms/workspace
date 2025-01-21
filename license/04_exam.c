#include <stdio.h>

// 배열 안의 숫자를 오름차순 정렬
void main(){
    int i,j;
    int temp;
                                       // 해설:  배열 안의 숫자를 오름차순 정렬
    int a[5] = {75,95,85,100,50};     // i: 0, 1, 2, 3
        for(j=0; j<4-i; j++){         // j: 0  0  0  0 
            if(a[j] > a[j+1]){        //    1  1  1  
                temp=a[j];            //    2  1
                a[j] = a[j+1];        //    3
                a[j+1] = temp;
            }
        }
        
        for(i=0; i<5; i++){
            printf("%d", a[i]);  // 답) 50, 75, 85, 95, 100
        }
}