#include <stdio.h>
#include <stdlib.h>

/*
21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/
int main()
{
    int n;
    char ch;

    do {

        printf ("\n\n Input a whole number: ");
        scanf ("%d", &n);
        scanf ("%c", &ch);
        fflush (stdin);
        if ( ch != 10 ){
            printf ("\n Not a whole number \n PLEASE, TRY AGAIN");
        }else if ( n >= 2){
            int isPrime = 1;
            for ( int i = 2; i < n; i++){
                isPrime = 1;
                if ( n % i == 0 ){
                    isPrime = 0;
                    break;
                }
            }
            if ( isPrime == 1){
                printf ("\n %d is a prime number \n Try another number...?", n);
            }else{
                printf ("\n %d is not a prime number!!! \n Try another number...?", n);
            }
        }else{
            printf (" %d is not a prime number", n);
        }
    }while ( n != 0 || ch != 10 );

    return 0;
}
