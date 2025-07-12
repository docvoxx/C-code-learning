#include <stdio.h>
#include <stdlib.h>
// 29_sumPrime
/*
nhập vào start và end
trong đoạn từ start đến end: in ra nếu có số nào là nguyên tố
thì     in ra màn hình
        tính tổng
        đếm
*/
int isPrime (int number);
int main()
{
    int start, end;
    printf ("\n Start:");
    scanf ("%d", &start);

    printf ("\n End:");
    scanf ("%d", &end);

    if ( start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0,count = 0;
    for ( int number = start; number <= end ; number++){
        if ( isPrime ( number )){
            printf (" %5d", number);
            sum += number;
            count++;
        }
    }
    printf ("\n Sum: %d", sum);
    printf ("\n Counted: %d", count);

    return 0;
}
int isPrime (int number){
    for ( int i = 2; i < number; i++){
        if ( number % i == 0){
            return 0;
        }
    }
    return number >= 2;
}



