#include <stdio.h>
#include <stdlib.h>
/*
viết hàm xin người dùng n
    in ra màn hình các số lẻ trong khoảng từ 1 đến n
*/
void printOdd (void);
int main()
{
    printOdd ();
    return 0;
}
void printOdd (void){
    int n;
    printf ("\n Input n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        if ( i % 2 != 0){
            printf ("
                    %3d", i);
        }
    }
}
