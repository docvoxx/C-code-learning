#include <stdio.h>
#include <stdlib.h>

    /*
    Nhập vào 3 số nguyên lần lượt là a, b, c
giả sử đó là 3 cạnh, kiểm tra xem
3 cạnh có tạo thành tam giác không
nếu có thì là tam giác gì
    Cân, Vuông, đều, vuông cân, thường
    */

int main()
{
    int a;
    int b;
    int c;

    printf ("\n Canh a:");
    scanf ("%d", &a);

    printf ("\n Canh b:");
    scanf ("%d", &b);

    printf ("\n Canh c:");
    scanf ("%d", &c);

    if ( a + b > c && a + c > b ){
        if ( a == b || b == c || a == c ){
            if ( a == b && b == c){
                printf ("\n ABC la Tam giac deu");
            }
            else if ( a * a + b * b == c * c
                   || b * b + c * c == a * a
                   || a * a + c * c == b * b ){
                printf ("\n ABC la Tam giac vuong can");
            }
            else {
                printf ("\n ABC la Tam giac can");
            }
        }
        else if ( a * a + b * b == c * c
               || b * b + c * c == a * a
               || a * a + c * c == b * b ){
            printf ("\n ABC la Tam giac vuong");
        }
        else {
            printf ("\n ABC la Tam giac thuong");
        }
    }
    else {
        printf ("\n ABC khong la Tam giac");
    }

    printf ("\n\n KET THUC BAI TAP 2");

    return 0;
}
