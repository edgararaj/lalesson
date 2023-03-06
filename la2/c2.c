#include <stdlib.h>

int char_to_int(char c)
{
    switch (c)
    {
        case '@':
        case '*':
        // Pedra
            return 0;
        case '|':
        case '-':
        // Papel
            return 1;
        case 'X':
        case '+':
        // Tesoura
            return 2;
    }

}

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    int win = 0;
    int lose = 0;
    for (int i = 0; i < n; i++)
    {
        char j[2];
        if (scanf("%s", j) != 1)
            return 1;

        int j1 = char_to_int(j[0]);
        int j2 = char_to_int(j[1]);

        int b = j1 - j2;
        abs(b) == 2 && b *-1;
        if (b > 0)
        {
            win++;
        }
        else if (b < 0)
        {
            lose++;
        }
    }
    printf("%d %d %d\n", win, lose, n - win - lose);
}