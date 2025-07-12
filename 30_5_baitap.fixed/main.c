#include <stdio.h>
#include <stdlib.h>

int fibonacci (int number);
int main()
{
    int number;
    printf ("\n Inout n: ");
    scanf ("%d", &number);
    fflush (stdin);
    printf ("\n Ket qua: %d ", fibonacci (number));
    return 0;
}
int fibonacci (int number){
    int result = 1, cur = 1, prev = 0;
    for (int i = 1; i < number; i++){
        result = cur + prev;
        prev = cur;
        cur = result;
    }
    return result;
}

