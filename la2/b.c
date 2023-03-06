#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    if (scanf("%d", &c) != 1)
        return 1;
    int a;
    if (scanf("%d", &a) != 1)
        return 1;
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    for (int i = 0; i < n; i++)
    {
        int valor;
        if (scanf("%d", &valor) != 1)
            return 1;
        if (c + valor >= 0 && c + valor <= a)
        {
            c += valor;
        }
    }

    printf("%d\n", c);
}