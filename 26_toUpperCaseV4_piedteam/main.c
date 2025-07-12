#include <stdio.h>
#include <stdlib.h>
// 26_toUpperCaseV4
char toUpperCaseV4 ( char character);// khai bao
int main()
{
    // input
    char ch;
    printf ("\n Nhap ky tu:");
    scanf ("%c", &ch);
    fflush (stdin);

    toUpperCaseV4 (ch);// call
    printf ("\n Ky tu:", ch);
}
char toUpperCaseV4 ( char character ){// build
    //proccess
    if ( character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
