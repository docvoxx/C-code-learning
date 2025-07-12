#include <stdio.h>
#include <stdlib.h>
// 26_toUpperCaseV3
char toUpperCaseV3 ( void );
int main()
{
    char ch = toUpperCaseV3 ();// call
    printf ("\n Ky tu: %c", ch);
    return 0;
}
char toUpperCaseV3 ( void ){// build
    //input
    char character;
    printf ("\n Nhap ki tu:");
    scanf ("%c", &character);
    fflush (stdin);
    // process
    if ( character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
