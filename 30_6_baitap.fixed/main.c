#include <stdio.h>
#include <stdlib.h>
/*
6. Viết hàm nhận vào n, tính tổng các chẳn từ 1 đến n
*/
int sumEven (int n);
int main()
{
    printf("\n Ket qua la %d", sumEven(5));
    return 0;
}
int sumEven (int n){
    int sumEven = 0;
    for ( int i = 1; i <= n; i++){
        if ( i % 2 == 0){
            sumEven += i;
        }
    }
    return sumEven;
}
