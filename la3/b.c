#include <stdio.h>
#include <string.h>

int main()
{
    char m[3][3] = {{'7', '8', '9'}, {'4', '5', '6'}, {'1', '2', '3'}};
    int n;
    if (scanf("%d", &n) != 1)
        return 1;
    char out[n];
    for (int i = 0; i < n; i++)
    {
        int x = 1, y = 1;
        char str[1000];
        if (scanf("%s", str) != 1)
            return 1;
        for (size_t j = 0; j < strlen(str); j++)
        {
            switch (str[j])
            {
            case 'C':
                if (y < 1 || y > 1 || x < 1 || x > 1)
                    break;
                y += 1;
                break;
            case 'B':
                if (y < 1 || y > 1 || x < 1 || x > 1)
                    break;
                y -= 1;
                break;
            case 'D':
                if (y < 1 || y > 1 || x < 1 || x > 1)
                    break;
                x -= 1;
                break;
            case 'E':
                if (y < 1 || y > 1 || x < 1 || x > 1)
                    break;
                x += 1;
                break;
            }
        }
        out[i] = m[x][y];
    }
    out[n] = 0;
    printf("%s\n", out);
}