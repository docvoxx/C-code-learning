#include <stdio.h>
#include <stdlib.h>
/*
4.viết hàm nhận vào n, tính n giai thừa
*/
/*
int factorial (int number);
int main()
{
    int n;
    printf ("\n input n: ");
    scanf ("%d", &n);
    fflush (stdin);
    n = factorial (n);
    printf ("\n%d", n);
    return 0;
}
int factorial (int number){
    int result = 1;
    for (int i = 1; i <= number; i++){
        result *= i;
    }
    return result;
}
*/
int factorialV2 (int number);
int main()

{
    int n;
    printf ("\n input n: ");
    scanf ("%d", &n);
    fflush (stdin);
    n = factorialV2 (n);
    printf ("\n%d", n);
    return 0;
}
int factorialV2 (int number){
    if (number == 1 || number == 0){
        return  1;
    }
    return number * factorialV2 (number - 1);
}
