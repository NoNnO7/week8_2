#include <stdio.h>
int fact(int n)
{
    int temp = 1;
    for (size_t i = 1; i <= n; i++)
    {
        temp *= i;
    }
    return temp;
}
int main()
{
    int n;
    scanf_s("%d", &n);
    printf("%d", fact(n));
    return 0;
}