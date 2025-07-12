#include <stdio.h>
#include <stdlib.h>
/*
start và end
in ra màn hình trung bình nhân của số khonag3 start và end
*/

float geometric(int start, int end);
int main()
{
    int start, end;
    printf ("\n Start: ");
    scanf ("%d", &start);
    printf ("\n End: ");
    scanf ("%d", &end);

    float n = geometric (start,end);
    printf ("\n %f", n);
    return 0;
}
float geometric (int start, int end){
    int mul = 1;
    int count = 0;
    for ( int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow (mul, 1/count);
}

