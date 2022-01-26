#include <stdio.h>
int sumofdigits(int num);

int main()
{
int num,sum;
    printf("Enter any number to find sum:" );
    scanf("%d",&num);
    sum = sumofdigits(num);
    printf("Sum of digits of %d=%d",num,sum);
    return 0;
}
int sumofdigits(int num)
{
    if(num==0)
        return 0;
    return((num % 10)+ sumofdigits(num/10));
}
