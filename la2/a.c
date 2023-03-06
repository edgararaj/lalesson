#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ncartas;
    if (scanf("%d", &ncartas) != 1)
        return 1;
    int *cartas = (int *)malloc(ncartas * sizeof(int));
    for (int i = 0; i < ncartas; i++)
    {
        if (scanf("%d", &cartas[i]) != 1)
            return 1;
    }

    int x = 0, y = 0;
    for (int i = 0; i < ncartas; i++)
    {
        switch ((cartas[i] - 1) % 4)
        {
        case 0:
            y -= 1;
            break;
        case 1:
            y += 1;
            break;
        case 2:
            x -= 1;
            break;
        case 3:
            x += 1;
            break;
        }
    }
    printf("%d %d\n", x, y);
}