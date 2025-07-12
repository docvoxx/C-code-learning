#include <stdio.h>
#include <stdlib.h>
// 26_toUpperCaseV2
void toUpperCaseV2 ( char character);
int main()
{
    //input
    char ch;
    printf ("\n Nhap ky tu: ");
    scanf ("%c", %ch);
    fflush (stdin);

    toUpperCaseV2 (ch);//call
    return 0;
}
void toUpperCaseV2 ( char character){// build
    // process
    if ( character >= 97 && character <= 122){
        character -= 32;
    }
    // output
    printf ("\n Ky tu: %c", character);
}


