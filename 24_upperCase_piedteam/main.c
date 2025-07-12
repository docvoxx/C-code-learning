#include <stdio.h>
#include <stdlib.h>

// 25_upperCase
// nhập kí tự thường
// biến thành ký tu in hoa
int main()
{
    char ch;
    printf ("\n Nhap ky tu: ");
    scanf ("%c", &ch);
    fflush (stdin);

    if ( ch >= 97 && ch <= 122 ){
        ch -= 32;
    }

    printf ("\n Ch = %c", ch);
    return 0;
}
