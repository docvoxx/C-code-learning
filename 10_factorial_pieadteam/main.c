#include <stdio.h>
#include <stdlib.h>

/*
    10_factorial
nhập vào n
tính n! ( giai thừa )
vd: nhập: 5
tính 5!
120 là 5*4*3*2*1 => 1*2*3*4*5
*/
int main()
{
    int num;
    int total = 1;

    printf ("\n input a number: ");
    scanf ("%d", &num);

    for (int i = 1; i <= num; i++){
        total *= i;
        printf ("%5d*%d", num, i);
    }
        printf ("  = %d", total);
    return 0;
}
