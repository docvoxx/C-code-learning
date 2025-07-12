#include <stdio.h>
#include <stdlib.h>
// 26_checkPrimeV3
int checkPrime ( void );
int main()
{
    int n = checkPrime ();
    if ( n == 1 ){
        printf (" Is prime", n);
    }else if ( n == 0 ){
        printf (" Not prime", n);
    }
    return 0;
}
int checkPrime ( void ){
    int number;
    printf ("\n Input number:");
    scanf ("%d", &number);
    fflush (stdin);

    int prim = 1;
    if ( number >= 2){
        for ( int i = 2; i < number; i++){
            prim = 1;
            if ( number % i == 0){
                prim = 0;
                break;
            }
        }
        if ( prim == 1){
            return 1;
        }else{
            return 0;
        }
    }else {
        return 0;
    }
}


