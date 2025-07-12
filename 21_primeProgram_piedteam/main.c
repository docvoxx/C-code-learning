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
        // ep nhap so nguyen
    while ( 1 == 1 ){
        do{

            printf ("\n Input number: ");
            scanf ("%d", &n);
            scanf ("%c", &ch);
            fflush (stdin);
            if ( ch != 10 ){
                printf ("\n Please Try another Number");
            }
        }while ( ch != 10 );
        if ( n == 0){
            break;
        }
        int isPrime = 1;
        if ( n >= 2 ){
            for (int i = 2; i < n; i++){
                isPrime = 1;
                if ( n % i == 0 ){
                    isPrime = 0;
                    break;
                }
            }
            if ( isPrime == 1 ){
                printf ("\n %d is Prime", n);
            }else{
                printf ("\n %d isnt Prime", n);
            }
        }else{
            printf ("\n %d isnt prime", n);
        }
        if ( n == 0){
            break;
        }
    }

    return 0;
}
