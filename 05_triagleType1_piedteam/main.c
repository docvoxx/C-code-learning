#include <stdio.h>
#include <stdlib.h>

// 05_triagleType
/*
Nhập vào 3 số nguyên là a, b, c
kiểm tra xem a, b, c có tạo thành tam giác không
nếu có thì là tam giác gì ?
*/

int main()
{
    int a, b, c;

    printf ("\n Nhap canh a: ");
    scanf ("%d", &a);

    printf ("\n Nhap canh b: ");
    scanf ("%d", &b);

    printf ("\n Nhap canh c: ");
    scanf ("%d", &c);

    // nếu code chạy đến đây nghĩa là a, b, c đã có giá trị
    // kiểm tra xem a, b, c có tạo thành tam giác không
    // là tam giác
    if ( a + b > c && b + c > a && a + c > b ){
        // xem là tam giác gì
        if ( a == b || b == c || a == c ){// 2 canh bang nhau
            if ( a == b && b == c && c == a ){
                printf ("\n ABC la tam giac deu");
            }
            else if ( a * a + b * b == c * c
                   || b * b + c * c == a * a
                   || c * c + a * a == b * b ) {
                printf ("\n ABC la tam giac vuong can");
            }
            else{
                printf ("\n ABC la tam giac can");
            }
        }
        else if ( a * a + b * b == c * c
               || b * b + c * c == c * c
               || c * c + b * b == a * a ){ // co goc vuong
            printf ("\n ABC la tam giac vuong");
        }
        else {
            printf ("\n ABC la tam giac thuong");
        }
    }
    else {
        printf ("\n ABC khong la tam giac");
    }
    return 0;
}
