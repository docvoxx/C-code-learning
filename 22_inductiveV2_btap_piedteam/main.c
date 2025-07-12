#include <stdio.h>
#include <stdlib.h>

//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    int n;
    char ch;
    float sum = 0;

    do{
        printf ("\n Input n: ");
        scanf ("%d", &n);
        scanf ("%c", &ch);
        fflush (stdin);
        if ( ch != 10 || n < 1 ){
            printf ("\n Not a positive whole value!!! \n PLEASE TRY AGAIN ");
        }
        if ( ch == 10 && n >= 1 ){
            float tmp;
            for ( int i = 1; i <= n; i++ ){
                tmp += i;
                printf (" 1/%.2f ", tmp);
                sum += 1 / tmp;
                int buffer = i;
            }
        }
    }while ( ch != 10 );
    printf ("\n Total: %f", sum);

    return 0;
}
