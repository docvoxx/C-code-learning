#include <stdio.h>
#include <stdlib.h>
// 26_toUpperCaseV1
void toUpperCaseV1 (void);//khaibao
int main()
{
    toUpperCaseV1 ();//call
    return 0;
}
void toUpperCaseV1 (void){// bluid
    // input
    char ch;
    printf ("\n Nhap ky tu: ");
    scanf ("%c", &ch);
    fflush (stdin);
    // process
    if ( ch >= 97 && ch <= 122 ){
        ch -= 32;
    }
    // output
    printf ("\n Ch = %c", ch);
}
