#include <stdio.h>
#include <stdlib.h>

// 09_inductiveResult
/*
Nhập vào 1 số nguyên n
tính kết quả của 1^n + 2^n + 3^n + ... + n^n
vd; nhập n = 5
tính kết quả của 1^5 + 2^5 + 3^5 +4^5 + 5^5
*/
int main()
{
     int n;
     int total;

    printf ("\n input real num n: ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++ ){
        total += pow(i,n);
        printf ("%5d^%d +", i, n);
    }

        printf (" = %5d", total);
    return 0;
}
