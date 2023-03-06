#include <stdio.h>
#include <stdlib.h>

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

        if (j[0] == '@')
        {
            if (j[1] == '+') 
                win++;
            if (j[1] == '-') 
                lose++;
        }
        if (j[0] == '|')
        {
            if (j[1] == '*') 
                win++;
            if (j[1] == '+') 
                lose++;
        }
        if (j[0] == 'X')
        {
            if (j[1] == '-') 
                win++;
            if (j[1] == '*') 
                lose++;
        }
    }
    printf("%d %d %d\n", win, lose, n - win - lose);
}