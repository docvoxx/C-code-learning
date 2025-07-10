#include <stdio.h>
#include <stdlib.h>

/*
tạo project 08_workEvenCount
 in ra màn hình các số chẳn trong đoạn
 tính tổng các số lẽ trong đoạn
 đếm xem có bao nhiêu số trong đoạn
 đếm xem có bao nhiêu số chẳn trong đoạn
*/

int main()
{
    int a, b;

    printf ("\n Range from: ");
    scanf ("%d", &a);

    printf ("\n To: ");
    scanf ("%d", &b);

    if ( a > b ){
        int tmp = a;
            a = b;
            b = tmp;
    }
    int even = 0;
    int sumOdd = 0;
    int totalNum = 0;
    int totalEven = 0;

    printf ("\n Even number in the range: ");

    for ( int i = a; i <= b; i++ && totalNum++){
        if ( i % 2 == 0 ){
            printf ("%3d", i);
            totalEven++;
        }else{
            sumOdd += i;
        }
    }
        printf ("\n Sum Odd Numbers in range: %d", sumOdd);
        printf ("\n Total Numbers in range: %d", totalNum);
        printf ("\n Total Even Numbers in range: %d", totalEven);

    return 0;
}
