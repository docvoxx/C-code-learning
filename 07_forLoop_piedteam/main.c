#include <stdio.h>
#include <stdlib.h>

// 07_forLoop: vòng lặp for

int main()
{
    /*
    for ( khởi đầu; điều kiện thoát; bước nhảy ){
        command block
    }
    */
    int a;
    printf ("\n Nhap ti le drop skin ");
    scanf ("%d", &a);
    for ( int i = 1; i <= a; i++ ) {
        printf ("\n%d quay trung skin dep", i);
    }//blockScope


    return 0;
}
