#include <stdio.h>
#include <stdlib.h>
// checkPrimeV2
void checkPrime ( int number );
int main()
{
    int n;
    printf ("\n Input number:");
    scanf ("%d", &n);
    fflush (stdin);

    checkPrime (n);
    return 0;
}
void checkPrime ( int number ){
    int prim = 1;
    if ( number >= 2){
        for ( int i = 2; i < number; i++){
            prim = 1;
            if ( number % i == 0 ){
                prim = 0;
                break;
            }
        }
        if ( prim ==  1 ){
            printf ("\n %d is prime", number);
        }else{
            printf ("\n %d is not prime", number);
        }
    }else{
        printf ("\n %d is not prime", number);
    }
}
