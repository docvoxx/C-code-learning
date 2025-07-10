#include <stdio.h>
#include <stdlib.h>

/*
Tittle: project 08_workEvenCount
Purpose: in ra màn hình các số chẳn trong đoạn
 tính tổng các số lẽ trong đoạn
 đếm xem có bao nhiêu số trong đoạn
 đếm xem có bao nhiêu số chẳn trong đoạn
 Input: a range from min to max
 - Min
 - Max
 Output:
 - Even number
 - Total Odd
 - Total of number in the range
 - Total of even number in the range
 Author: Nguyen Duc Lan
 Date updated: 8 Dec,2023
*/

int main()
{

    int a, b; // range (min, max)

    printf ("\n Range from: " );
    scanf ("%d", &a);

    printf (" To: ");
    scanf ("%d", &b);

    if ( a > b ){ // swap a and b if a > b
     int tmp = a;
         a = b;
         b = tmp;
    }
    int even  = 0; // even: so chan
    int count = 0;
    int totalEven = 0;

    printf ("\n Even number: ");

    for ( int i = a; i <= b; i++
        && count++){
        if( i % 2 == 0 ){// case1: chia het
            printf (" %3d ", i);
            even += 1;
        }else {// case2: chia ko het
            totalEven += i;
        }
    }
    printf ("\n Sum's odd numbers: %d ", totalEven);
    printf ("\n Total of number in the range: %d ", count);
    printf ("\n Total of even number in the range: %d", even);

    return 0;
}
