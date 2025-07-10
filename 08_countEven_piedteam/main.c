#include <stdio.h>
#include <stdlib.h>

//08_countEven
/*

nhập vào 2 số nguyên lần lượt là start và end
in ra màn hình các số trong đoạn từ start đến end
- mô tả:
    nhap start: -2
    nhap end: 6

    -2 -1 0 1 2 3 4 5 6
*/
int main()
{
    int a, b;

    printf ("\n Start counting: " );
    scanf ("%d", &a);

    printf (" End at: ");
    scanf ("%d", &b);

    if ( a > b ){
        int c = a;
            a = b;
            b = c;
    }

    for ( int i = a; i <= b; i++){
        printf (" %5d ", i);// %5d là cách 5 ô giữa các số liệu d
    }

    // Tính tổng các số có trong đoạn trên
    int sum = 0;
    for ( int i = a; i <= b; i++){
        sum += i;
    }
        printf ("\n Tong so vua nhap la: %d ", sum);
    return 0;
}
/*
tạo project 08_workEvenCount
 in ra màn hình các số chẳn trong đoạn
 tính tổng các số lẽ trong đoạn
 đếm xem có bao nhiêu số trong đoạn
 đếm xem có bao nhiêu số chẳn trong đoạn
*/
