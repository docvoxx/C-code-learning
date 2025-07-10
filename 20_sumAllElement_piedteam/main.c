#include <stdio.h>
#include <stdlib.h>

//20_sumAllElement
/*
Nhập vào n là số nguyên dương

tính tổng các số thành phần cái số đó

n = 1234
-> result = 10
hint: hãy dùng / và %
1234 % 10 = 4
1234 / 10 = 123
*/
int main()
{
    int n;
    char buffer;

    do{
        printf ("\n Input number: ");
        scanf ("%d", &n);
        scanf ("%c", &buffer);
        fflush (stdin);
        if ( buffer != 10 || n < 0 ){
            printf ("\n Not the right value!!! \n PLEASE, TRY AGAIN");
        }
    }while ( buffer != 10 );
    int sum = 0;
    while ( n != 0 ){
        sum += n % 10;
        n /= 10;
    }
    /*
    for ( int tmp = 0; n != 0; n /= 10){
        tmp = n % 10;
        sum += tmp;
    }
    */
    /*
    do{
        int tmp = ( n % 10 );
            sum += tmp;
            n = ( n / 10 );
    }while ( n != 0);
    */
    printf ("\n Total of single digit: %d", sum);

    return 0;
}
