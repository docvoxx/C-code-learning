#include <stdio.h>
#include <stdlib.h>

// 03_evenOdd
/*
    xin người dùng nhập từ bàn phím 1 số nguyên bất kỳ
    kiểm tra xem số đó là chẳn hay lẻ
    in ra màn hình báo cáo
*/

int main()
{
    int number;
    printf ("\n plz, input a number:");
    scanf ("%d", &number);

    // xin cái địa chỉ "&"
    // number đã có giá trị
    // kiểm tra xem giá trị number chẳn hay lẻ
    if (number % 2 == 0){
        printf ("\n %d is even", number);
    }else{
        printf ("\n %d is odd", number);
    }
    return 0;
}
