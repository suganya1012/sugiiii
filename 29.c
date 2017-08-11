#include <stdio.h>
 
void main()
{
    long a, temp, digit, sum = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &a);
    temp = a;
    while (a > 0)
    {
        digit = a % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
