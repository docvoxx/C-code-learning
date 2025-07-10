#include <stdio.h>
#include <stdlib.h>

// 06_quadraticEquation
/*
nhap vao 3 so thuc dai dien cho a, b, c
la he so cua ptrinh aX^2 + bx + c = 0
tim nghiem cua ptrinh  tren
a^2 => a*a => pow(a,2)
căn 2 của a => sqrt(a)
căn 5 của a => pow(a, (float)1/5)
*/
int main()
{
    // nhap vao a, b ,c
    float a, b, c, delta, m, n;

    printf ("\n Nhap a: ");
    scanf ("%f", &a);

    printf ("\n Nhap b: ");
    scanf ("%f", &b);

    printf ("\n Nhap c: ");
    scanf ("%f", &c);

    printf ("\n Phuong trinh bac 2 co dang: %.0f(x^2) + %.0fx + %.0f", a, b ,c);

   if ( a == 0 ) {// bx + c = 0
        if ( b == 0 ){// c == 0
            if ( c == 0 ) {
                printf ("\n Pt vo so nghiem");
            }
            else{
                printf ("\n Pt vo nghiem");
            }
        }
        else{//bx + c = 0 b != 0
            printf ("\n Pt co 1 nghiem %f", - c / b);
        }
   }
   else {
         // tính delta
        delta = b * b - 4 * a * c;

        //xét delta: >  < = 0
        if ( delta > 0 ) {

            m = ( - b + sqrt (delta) ) / ( 2 * a );
            n = ( - b - sqrt (delta) ) / ( 2 * a );

            printf ("\n Phuong trinh co 2 nghiem voi m = %.2f va n = %.2f", m, n);
        }
        else if ( delta == 0 ) {
            m = n = ( - b + sqrt (delta) ) / 2 * a;
            printf ("\n Phuong trinh bac 2 co 2 nghiem kep la m = n = %.2f", m);
        }
        else {
            printf ("\n Phuong trinh bac 2 khong co nghiem");
        }

        return 0;
    }
   }
