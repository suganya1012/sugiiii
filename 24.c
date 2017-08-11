#include <stdio.h>
int main()
{
    int a, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
