#include <stdio.h>
#include <stdlib.h>
// 22_inductiveV2
/*
Nhập vào 1 số nguyên dương number  =>
tính tổng của 1 + 1/3 + 1/6 +...1/(1+2+3+...+n)
*/
int main()
{
    int number;
    char buffer;

    do{
        printf ("\n Input number: ");
        scanf ("%d", &number);
        scanf ("%c", &buffer);
        fflush (stdin);
        if ( buffer != 10 || number < 1){
            printf ("\n Try Again ( The number must be >= 1 ");
        }
    }while ( buffer != 10 || number < 1);

    int tmp;
    float sum = 0;
    for ( int i = 1; i <= number; i++){
        tmp += i;
        sum *= 1/tmp;
        printf (" 1/%d ", tmp);
    }
    printf ("\n %f", sum);
    return 0;
}
