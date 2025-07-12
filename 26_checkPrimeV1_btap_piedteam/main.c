#include <stdio.h>
#include <stdlib.h>
// checkPrimeV1
void checkPrime ( void );// khai bao
int main()
{
    checkPrime ();// call
    return 0;
}
void checkPrime ( void ){// build
    // input
    int n;
    int prim = 1;
    printf ("\n Input n:");
    scanf ("%d", &n);
    //process
    if ( n >= 2){
        for ( int i = 2; i < n; i++){
            prim = 1;
            if ( n % i == 0){
                prim = 0;
                break;
            }
        }
    // output
        if ( prim == 1 ){
            printf ("\n %d is prime", n);
        }else {
            printf ("\n %d is not prime", n);
        }
    }else {
        printf ("\n %d is not prime ", n);
    }
}
