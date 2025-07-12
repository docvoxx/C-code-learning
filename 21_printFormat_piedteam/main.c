#include <stdio.h>
#include <stdlib.h>


// 21_printFormat
/*
ép người dùng nhập vào 1 ký tự thuộc chữ thường
sai thì nhập lại

in ra màn hình ký tự đó dưới dạng ký tự, số, octal
*/
int main()
{
    char ch;

    do{
        printf ("\n Input normal character: ");
        scanf ("%c", &ch);
        fflush ( stdin);
        if ( ch < 97 || ch > 122 ){
            printf ("\n Not a normal character!!! \n PLEASE, TRY AGAIN ");
        }
    }while ( ch < 97 || ch > 122);

    printf("\n %d %c %o", ch, ch, ch);
    return 0;
/*
21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/

//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
}
