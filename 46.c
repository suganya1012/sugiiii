#include <stdio.h>
int main() 
{
    int a, i = 1;
    printf("
    Enter any Number:");
    scanf("%d", &a);
    printf("Multiplication table of %d: ", a);
    
    while (i <= 5) {
        printf("
        %d x %d = %d", a, i, a * i);
        i++;
    }
    return 0;
}
