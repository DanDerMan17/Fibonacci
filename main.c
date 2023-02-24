#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int result, n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", a);
        result = a + b;
        a = b;
        b = result;
    }

    return 0;
}