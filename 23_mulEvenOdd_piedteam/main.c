#include <stdio.h>
#include <stdlib.h>
// 23_mulEvenOdd
/*
Nhập vào số nguyên n >= 2
tính tích các số chẵn và tích các số lẻ
trong đoạn từ 1 đến n - 1

vd: nhập n = 5
tính các số chẵn: 8 >= 2 * 4
tích các số lẻ :  3 >= 1 * 3
*/
int main()
{
    int number;
    char buffer;
    int sumEven = 1, sumOdd = 1;
    int hasEven = 0, hasOdd = 0;
    do {
        printf ("\n Input number: ");
        scanf ("%d", &number);
        scanf ("%c", &buffer);
        fflush (stdin);
        if ( buffer != 10 || number < 2 ){
            printf ("\n Please Try A Number > 2 ");
        }
    }while ( buffer != 10 || number < 2 );

    for ( int i = 1; i < number; i++){
        if ( i % 2 == 0 ){
            sumEven *= i;
            hasEven = 1;
        }else{
            sumOdd *= i;
            hasOdd = 1;
        }
    }

    sumEven *= hasEven;
    sumOdd  *= hasOdd;
    printf (" Total Even: %d", sumEven);
    printf (" \n Total Odd: %d", sumOdd);
    return 0;
}
