#include <stdio.h>

int main()
{
    int soldados = 5;
    int maior = 0;
    int maior_indice = 0;
    for (int i = 0; i < soldados; i++)
    {
        int num;
        int a = scanf("%d", &num);
        (void)a;
        if (num > maior) 
        {
            maior = num;
            maior_indice = i;
        }
    }
    printf("%d\n", maior_indice + 1);
}