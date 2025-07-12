#include <stdio.h>
#include <stdlib.h>
// 26_checkPrimeV4
int checkPrime ( int number );
int main()
{
    int n;
    printf ("\n Nhap number:");
    scanf ("%d", &n);
    fflush (stdin);

    int number = checkPrime (n);// call
    if ( number == 1 ){
        printf (" Is prime", n);
    }else if ( number == 0 ){
        printf (" Not prime", n);
    }
    return 0;
}
int checkPrime ( int number ){
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
        }else {
            return 0;
        }
    }else{
        return 0;
    }
}
