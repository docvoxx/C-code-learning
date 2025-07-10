#include <stdio.h>
#include <stdlib.h>

// 19_perfectSquare
/*
Nhập vào số nguyên dương number
kiểm tra số đó là số chính phương ko?
một số nếu căn 2 mà được số nguyên thì gọi là chính phương

number 9 ( 0^2 1^2 2^2 3^2 = 9 )
*/

int main()
{
    int number;
    char buffer;
    // ép nhập số dương

    do {
        printf ("\n Input number: ");
        scanf ("%d", &number);
        scanf ("%c", &buffer);
        fflush (stdin);
        if ( buffer != 10 || number < 0){
            printf ("\n Not a positive number!!\n PLEASE, TRY AGAIN");
        }
    }while ( buffer != 10 || number < 0 );

    if ( sqrt(number) == (int)sqrt(number)){ // lấy căn của số đó coi bằng phần ép kiểu int nguyên của chính nó ko
                                            // nếu bằng thì là cp vd: sqrt 8 != int sqrt 8 ko là cp
    printf ("Perpect Square number");
    }else{
        printf ("Not perpect Square number");
    }

    return 0;
}
