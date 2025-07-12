#include <stdio.h>
#include <stdlib.h>
// 24_printPatern
/*
nhập vào hight và width in ra màn hình
vd: hight = 5 và width = 7
*******
*     *
*     *
*     *
*******
*/
int main()
{
    int h, w;

    printf ("\n Input hight: ");
    scanf ("%d", &h);

    printf ("\n Input width: ");
    scanf ("%d", &w);

    for ( int i = 1; i <= h; i++ ){
        for ( int q = 1; q <= w; q++ ){
            if ( i == 1 || i == h || q == 1 || q == w ){
                printf ("*");
            }else{
                printf (" ");
            }
        }
        printf ("\n");
    }
    return 0;
}
