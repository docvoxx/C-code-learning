
// 04_compare3Number
/*
nhập từ bàn phím 3 số nguyên
lần lượt là a, b, c

nhiệm vụ: xuất ra màn hình tên biến có giá trị lớn nhất

mô tả phần mềm:
nhap a: 10
nhap b: 30
nhap c: 40

a lớn nhất      ( a > b && a > c )
a và b lớn nhất ( a == b && a > c )
a và c lớn nhất ( a == c && a > b )

b lớn nhất      ( b > a && b > c )
b và c lớn nhất ( b == c && b > a )

c lớn nhất      ( c > b && c > b )
a b c bằng nhau ( a == b == c )

*/
int main()
{
    int a, b, c;
    /*
    int b;
    int c;
    */

    printf ("\n Nhap a:");
    scanf ("%d", &a);

    printf ("\n Nhap b:");
    scanf ("%d", &b);

    printf ("\n Nhap c:");
    scanf ("%d", &c);

    if ( a > b && a > c ) {
        printf ("\n a has the highest value: %d", a);
    }else if ( a == b && a > c ){
        printf ("\n a and b have the highest value: %d", a, b);
    }else if ( a == c && a > b ){
        printf ("\n a and c have the highest value: %d", a, c);
    }else if ( b > a && b > c ) {
        printf ("\n b has the highest value: %d", b);
    }else if ( b == c && b > a) {
        printf ("\n b and c have the highest value: %d", b, c);
    }else if ( c > b && c > b ) {
        printf ("\n c has the highest value: %d", c);
    }else                       {
        printf ("\n a b c bang nhau");
    }

    printf ("\n\n KET THUC BAI TAP 1");
    return 0;
}
