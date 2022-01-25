#include <stdio.h>
int primenum(int,int);

int main()
{
    int num1, check;
    printf("Enter a number to find:");
    scanf("%d", &num1);
    check = primenum(num1, num1 / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num1);

    } else
    {
        printf("%d is not a prime number\n", num1);

    }
    return 0;
}
int primenum(int num1,int i) {
    if (i == 1) {
        return 1;

    } else {
        if (num1 % i == 0) {
            return 0;
        } else {
            return primenum(num1, i - 1);
        }
    }
}


